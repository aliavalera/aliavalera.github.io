---
layout: essay
type: essay
title: "Working With AI, Not Against It"
# All dates must be YYYY-MM-DD format!
date: 2026-05-11
published: true
labels:
  - Reflection on AI Use in ICS 314 
---

<img width="400px" class="rounded float-start pe-4" src="../img/AIUse/aimeme.jpg">

## I. Introduction

Artificial intelligence has been around for years, but the debut of large language models like ChatGPT shifted the landscape instantly. For students, these tools offer a significant edge in the classroom. In software engineering, AI enhances efficiency provided the developer can distinguish between high-quality and flawed output. Throughout ICS 314, I primarily used OpenAI's ChatGPT, adding Anthropic's Claude in the latter half of the semester and keeping GitHub Copilot active in VSCode for background assistance.

## II. Personal Experience with AI

### 1. Experience WODs
I barely used AI for Experience WODs. The provided screencasts and smart-questions Discord channel were usually enough to get me through. The few times I did use AI were when I ran into errors caused by outdated information or version differences—like seeding issues. For that, I asked ChatGPT: *"I'm getting an error when running npx prisma db seed—how do I troubleshoot this?"* It helped, but it wasn't my first choice.

### 2. In-Class Practice WODs
AI served as an occasional tutor when I hit unfamiliar concepts. During the Functional Programming module, I struggled with combining array methods and asked ChatGPT: "How do I use .map and .filter together to transform an array of objects?" While the pattern was helpful, translating generic logic into specific WOD requirements remained a challenge. I often found that re-reading instructions or looking at previous examples was more effective.

### 3. In-Class WODs
For graded in-class WODs, I used AI occasionally to help understand what the prompt was actually asking me to do. For example, during the Wet Bulb Globe Temperature WOD, there was a lot of domain information to process on top of the actual coding task. I'd paste the instructions into ChatGPT and ask something like: *"Can you summarize what this WOD is asking me to build?"* to get a clearer picture before diving in. Sometimes the instructions were given as images too, so I couldn't even copy and paste them—I had to manually retype the key parts to get any help from AI. That extra step alone ate into the already limited time. When it came to generating actual code for the solution, the output rarely fit our specific setup well enough to be useful, so I mostly relied on what I already knew.

### 4. Essays
I used ChatGPT to refine my grammar and smooth out awkward transitions. My process involved writing a full draft first, then asking: *"How can I make the flow of these two paragraphs more professional?"* This kept my original arguments intact while polishing the final presentation.

### 5. Final Project
For the final project, AI played a meaningful role in both the design and development phases. Our team used an AI image generation tool to help ideate and visualize our UI mockup. On the development side, I prompted ChatGPT: *"How do I restrict certain pages to authenticated admin users in Next.js using NextAuth?"* The response gave me a solid starting point, though I had to adapt it to our Prisma schema.

### 6. Learning a Concept / Tutorial
When TypeScript and functional programming were introduced, I asked: "Can you explain the difference between .reduce and .filter with simple examples?" The breakdowns helped build intuition. However, I always cross-referenced these explanations with official documentation to ensure I wasn't learning outdated syntax.

### 7. Answering a Question in Class or in Discord
I chose not to use AI for community interactions. Since I participated less frequently than I intended, I wanted any contribution I did make to be authentic. Providing AI-generated answers in a live setting felt like it would undermine the trust and collaborative spirit of the class.

### 8. Asking or Answering a Smart-Question
I mostly used the smart-questions channel as a reader rather than a poster. Because I often started assignments late, most of my technical hurdles–like Vercel deployment errors or ESLint configs–had already been solved by classmates. 

### 9. Coding Example
For smaller syntax questions, AI was extremely efficient. I sometimes asked questions like: *"How do I conditionally render something in React?"* The quick examples helped me solve problems while staying focused on the larger application logic.

### 10. Explaining Code
I used ChatGPT to help explain code I did not fully understand. For example, when working with Prisma queries, I sometimes asked what certain lines of code were doing or why specific data was being returned. The explanations helped me better understand how the database connected to the application.

### 11. Writing Code
I used AI to help with repetitive setup code, such as creating basic React components or form layouts. For example, while building forms, I asked ChatGPT to generate the initial JSX structure. It gave me a useful starting point, but I still had to customize the code to fit our project requirements.

### 12. Documenting Code
I deliberately avoided AI for documentation. Writing my own comments forced me to explain my logic clearly, which served as a final check on my own understanding. Skipping AI here ensured that I actually knew why my code worked before moving on.

### 13. Quality Assurance
When ESLint flagged errors like no-unused-vars in a way I didn't expect, I asked ChatGPT for the reasoning. Sharing a snippet with the prompt, "Why is this React component not re-rendering on state change?", often led to a quick discovery of a missing dependency in a useEffect hook.

### 14. Other Uses in ICS 314
Before starting the final project, I sometimes used AI to ask broader planning questions about building web applications. The responses helped me think about possible issues early and better organize how we approached the project.

## III. Impact on Learning and Understanding
AI lowered the barrier to entry for complex topics and maintained my momentum. However, it also introduced the risk of passive learning. I eventually realized I needed to treat AI as a starting point—using it to get unstuck, then taking the time to manually re-trace the logic to ensure the knowledge actually stuck.

## IV. Practical Applications
Beyond this course, especially in environments like hackathons, AI can be very useful for quickly building starter code, layouts, or project ideas. The speed it provides is a major advantage as long as the developer still reviews and understands the output.

## V. Challenges and Opportunities
The primary challenge was learning when to trust the AI. Early on, I implemented code without fully verifying it, which introduced subtle, hard-to-trace bugs. This creates an opportunity for education: teaching "AI literacy" as a core skill will better prepare students for an industry where these tools are now standard.

## VI. Comparative Analysis
Traditional teaching methods in software engineering—lectures, readings, and guided WODs—provide structured, curated pathways through complex material. AI-enhanced methods provide immediate, personalized feedback. The ideal educational environment combines both: using traditional pedagogy to learn the "how," while using AI to reduce the friction of the "doing."

## VII. Future Considerations
As AI moves from simple autocomplete to collaborative agents, foundational knowledge like system design and debugging methodology becomes more vital. Engineers will need to act as architects who direct AI with precision and review its output with high-level expertise.

## VIII. Conclusion
My relationship with AI evolved from using it as a crutch to using it as an intentional tool. While it significantly boosted my productivity, the experience reminded me that AI amplifies existing ability—it doesn't replace the need for a deep understanding of the craft.

For future iterations of ICS 314 and similar courses, I would recommend explicitly addressing AI use as part of the curriculum—not to restrict it, but to teach students how to use it well. A guided module on effective prompting, output verification, and the ethical dimensions of AI-assisted development would prepare students not just for the course, but for the profession. 


