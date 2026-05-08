---
layout: essay
type: essay
title: "Patterns, Not Accidents"
# All dates must be YYYY-MM-DD format!
date: 2026-04-30
published: true
labels:
  - Reflection on Design Patterns
---

<img width="200px" class="rounded float-start pe-4" src="../img/designPatterns/jenga-img.png">

There’s a tendency, especially early on, to treat every coding problem like it’s completely new. You write whatever works, move on, and repeat. That approach is fine for small scripts, but it doesn’t scale very far. Eventually, the code becomes harder to change than it was to write in the first place.

What I’ve started to realize is that most of these problems aren’t new at all. Other developers have run into the same issues—messy dependencies, rigid structures, hard-to-extend features—and over time, they’ve settled on reliable ways to deal with them. Those solutions are what we call design patterns.

Design patterns aren’t code you copy. They’re general ways of organizing a system so it stays flexible and easier to maintain. They give structure to decisions that might otherwise feel random.


## From Chaos to Structure: Design Patterns in Practice

In our final project, we didn’t start with design patterns in mind. We were mostly focused on getting features done. Early on, we approached issues pretty randomly—each of us would pick up a task without necessarily understanding how it connected to the rest of the system.

That worked for a bit, but it created friction. We had to communicate constantly just to avoid stepping on each other’s work, and changes in one area would unexpectedly affect another.

Over time, we naturally adjusted. Instead of picking random issues, we started focusing on specific parts of the project—one person working mainly on the UI, another on the backend, another on the database. Without really planning it, we had separated the system into layers.

Looking back, this lines up closely with the Model-View-Controller pattern. The UI handled presentation (View), the backend handled logic (Controller), and the database handled data (Model). We didn’t set out to implement MVC, but we ended up following it because it reduced overlap and made collaboration easier.

We ran into a similar issue when trying to extend functionality. Our first instinct was to create new variations of objects for every small change, but that quickly became repetitive. Instead, we restructured things so we could add behavior dynamically without modifying the original object.

This is essentially the idea behind the Decorator Pattern.


## What This Means in Practice

What stood out to me is that we didn’t “invent” these solutions. We arrived at them because the problems pushed us in that direction. The patterns simply give a name and structure to those decisions.

That’s why questions about design patterns in interviews aren’t really about definitions. They’re about whether you’ve experienced the kinds of problems that patterns solve, and whether you’ve learned to recognize and handle them in a more deliberate way.

In our project, using these approaches reduced unnecessary coupling and made it easier to extend the system without breaking existing functionality. More importantly, it changed how I think about structuring code. Instead of just asking, “Does this work?”, I’m starting to ask, “Will this still make sense later?”

---

Note: Lightly refined with AI for clarity, but based on our team’s actual experience.