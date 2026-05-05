---
layout: essay
type: essay
title: "A Design Pattern for Estimation"
# All dates must be YYYY-MM-DD format!
date: 2026-05-04
published: true
labels:
  - Reflection on Effort Estimation
---

<img width="200px" class="rounded float-start pe-4" src="../img/timer.png">

Much like the evolution of design patterns, my approach to effort estimation for my final project was built on pattern recognition and comparative analysis. I broke tasks into smaller, manageable pieces to better evaluate complexity. Due to my limited experience, I referenced historical data from past assignments (WODs) in my software engineering class to improve accuracy calculations. By analyzing the relative complexity of each task, I was able to transform vague goals into measurable effort.


## Learning Through Imperfect Estimates 

While estimating is rarely precise, its value lies not in accuracy but in calibrated uncertainty. Estimates create a baseline for learning, encourage discipline, and force deeper thinking about tasks. This played out directly in my own work: in issue-49 of my final project, I had to implement a “Change Password” feature and initially estimated the effort based only on the frontend logic. But tracking my work revealed a significant gap – I hadn’t accounted for the necessary API routes. Even though this made my estimate inaccurate, the act of tracking that effort was valuable because it highlighted a systematic oversight in my initial architecture. It forced me to build out the proper infrastructure, which ultimately improved the overall stability of the project and informed how I estimated future full-stack tasks.


## Benefits of Timers

Tracking actuals and creating estimates go hand in hand. This combination transforms guesswork into data-driven forecasting by documenting and correcting patterns over time. In practice, tracking my actual effort revealed a consistent bias toward underestimating backend work, gave me a clearer picture of my strengths and gaps as a developer, and built a personal reference point for similar future tasks. For example, the effort I tracked for adding and connecting the student and instructor term submission forms directly informed my estimate for the course claiming and joining forms.  Because both involved similar form logic and API integration, I was no longer guessing—I was extrapolating from evidence.


## Improving My Estimation 

To track my actual effort, I used a personal device timer, starting and stopping it as I worked on each task. It didn’t provide the most accurate measurements due to small interruptions, but they were consistent enough to reveal useful patterns over time. Next time, I would use a structured tool like Toggl to reduce manual overhead.


## My Use of AI 

For my final project, I used several AI tools, including Anthropic’s Claude (Sonnet 4.6), OpenAI’s ChatGPT (GPT-4o), and GitHub Copilot (GPT-4 Turbo). These tools were helpful for brainstorming ideas, debugging issues, and refactoring code. During a typical debugging session, I spent about 5 minutes crafting prompts, 2 minutes reviewing the generated response, and around 10 minutes validating and testing the solution within my codebase. This process reinforced that AI is most effective as a starting point rather than a final solution.

