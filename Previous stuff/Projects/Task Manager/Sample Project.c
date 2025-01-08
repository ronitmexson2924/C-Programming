#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

// Define Task structure
typedef struct {
    char description[256];
    char deadline[20];
    int priority; // 1 = High, 2 = Medium, 3 = Low
    int status;   // 0 = Pending, 1 = Completed
} Task;

Task tasks[MAX_TASKS];
int taskCount = 0;

// Function to create a new task
void createTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter task description: ");
    getchar();  // Clear newline left by previous input
    fgets(tasks[taskCount].description, 256, stdin);
    tasks[taskCount].description[strcspn(tasks[taskCount].description, "\n")] = '\0';  // Remove newline

    printf("Enter task deadline (YYYY-MM-DD HH:MM): ");
    fgets(tasks[taskCount].deadline, 20, stdin);
    tasks[taskCount].deadline[strcspn(tasks[taskCount].deadline, "\n")] = '\0';  // Remove newline

    printf("Enter task priority (1 = High, 2 = Medium, 3 = Low): ");
    scanf("%d", &tasks[taskCount].priority);

    tasks[taskCount].status = 0; // Task is pending
    taskCount++;

    printf("Task created successfully!\n");
}

// Function to display all tasks
void displayTasks() {
    if (taskCount == 0) {
        printf("No tasks to display!\n");
        return;
    }

    printf("\n--- Tasks ---\n");
    for (int i = 0; i < taskCount; i++) {
        printf("Task %d:\n", i + 1);
        printf("Description: %s\n", tasks[i].description);
        printf("Deadline: %s\n", tasks[i].deadline);
        printf("Priority: %d\n", tasks[i].priority);
        printf("Status: %s\n", tasks[i].status == 0 ? "Pending" : "Completed");
        printf("\n");
    }
}

// Function to delete a task
void deleteTask() {
    int taskNumber;
    printf("Enter task number to delete: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > taskCount) {
        printf("Invalid task number!\n");
        return;
    }

    for (int i = taskNumber - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    taskCount--;
    printf("Task deleted successfully!\n");
}

// Function to mark a task as completed
void markTaskCompleted() {
    int taskNumber;
    printf("Enter task number to mark as completed: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > taskCount) {
        printf("Invalid task number!\n");
        return;
    }

    tasks[taskNumber - 1].status = 1;
    printf("Task marked as completed!\n");
}

// Function to sort tasks by priority
void sortTasksByPriority() {
    for (int i = 0; i < taskCount - 1; i++) {
        for (int j = i + 1; j < taskCount; j++) {
            if (tasks[i].priority > tasks[j].priority) {
                Task temp = tasks[i];
                tasks[i] = tasks[j];
                tasks[j] = temp;
            }
        }
    }

    printf("Tasks sorted by priority!\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("\nTask Manager\n");
        printf("1. Create Task\n");
        printf("2. Display Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Mark Task as Completed\n");
        printf("5. Sort Tasks by Priority\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createTask();
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                markTaskCompleted();
                break;
            case 5:
                sortTasksByPriority();
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
