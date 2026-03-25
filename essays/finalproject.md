---
layout: essay
type: essay
title: "Final Project Proposal"
date: 2026-03-24
labels:
  - Software Engineering
  - Nextjs
---
"SkillSwap" - Student Talent Exchange
Disclaimer: This proposal represents my original thinking and research; I leveraged generative AI strictly as a sophisticated editor to polish the delivery of my ideas.

## Overview
*The problem:* Most students often have valuable skills—academic, creative, or practical—but there is no easy, structured way to share them. At the same time, students miss opportunities to learn useful real-world skills from their peers in a collaborative, low-pressure environment. 

*The solution:* SkillSwap is an application that allows students to exchange skills with one another through a structured, community-driven platform. Instead of focusing only on academic tutoring, SkillSwap expands into all types of knowledge sharing. Students can teach skills they are confident in and request help in areas they want to improve, creating a balanced ecosystem of peer-to-peer learning.

<div class="row" style="display: flex; margin-top: 40px; margin-bottom: 40px;">
  <div class="col">
    <img width="500px" class="rounded mx-auto d-block" src="../img/skillharbour_intro_video.png__940x499_q85_crop_upscale.png">
  </div>
</div>

## Approach
To use SkillSwap, a student must log in and create a profile. In their profile, they list:
	•	Skills they can teach (e.g., surfing, video editing, guitar, coding)
	•	Skills they want to learn
	•	Availability for meetups (in-person or virtual)
	•	A short bio and optional profile photo
Each student becomes both a mentor and learner, depending on the skill.
Another section of the site organizes skills into categories (e.g., Academics, Arts, Technology, Life Skills). Within each category:
	•	Users can browse available “mentors” and “learners”
	•	Each skill listing shows who is offering help and who is requesting it
A student can create a Skill Session, which includes:
	•	The skill/topic (e.g., “Intro to Crocheting” or “Basic guitar chords”)
	•	Type of session (teaching or collaborative)
	•	Time and location (or virtual link)
	•	Number of participants allowed
This session generates notifications to relevant users who either:
	•	Want to learn that skill, or
	•	Have listed that skill as something they can teach
Users can respond by joining the session.
There is also a calendar system that displays all upcoming sessions, along with participant lists.
There are two main styles of use for SkillSwap:
1. Planned Learning: A student schedules a session in advance to learn or teach a skill. Others can sign up ahead of time.
2. Instant Help (“Right Now” Mode): A student needs immediate help (e.g., stuck on homework or practicing a skill). They can create a “Right Now” request, notifying nearby or available users for quick assistance.
SkillSwap has a key challenge: Students may feel hesitant to offer their skills or ask for help due to social pressure or lack of confidence.
To address this, SkillSwap incorporates game mechanics, such as:
	•	Points for teaching or attending sessions
	•	Badges for consistency or skill mastery
	•	Levels that reflect contribution to the community
	•	Leaderboards for top contributors
Rewards (such as small prizes, recognition, or school-sponsored incentives) can be given to the most active and helpful users.
A major design challenge is preventing abuse of the system. For example:
	•	Users should not gain points without meaningful participation
	•	Groups should not fake sessions just to earn rewards
This can be addressed through:
	•	Attendance verification (check-in system)
	•	Session ratings and feedback
	•	Admin monitoring tools
There must also be admins who:
	•	Monitor activity and reports of inappropriate behavior
	•	Manage users and content
	•	Ensure sessions remain safe and productive
Important design goals for SkillSwap are:
	•	To encourage peer-to-peer learning beyond traditional academics
	•	To build a stronger, more connected school community
	•	To promote confidence in both teaching and learning
	•	To support both in-person and virtual collaboration
	•	To create a safe and inclusive environment for all students
SkillSwap is not meant to replace classroom learning or formal tutoring systems. Instead, it enhances them by enabling real-world interaction, collaboration, and skill-building among peers.

## Mockup page ideas
Some possible mockup pages include:
	•	Landing page
	•	User home/dashboard
	•	Admin dashboard
	•	User profile page
	•	Skill browsing page (by category)
	•	Create Skill Session page
	•	Session details page
	•	Calendar page
	•	Notifications page
	•	Game mechanics page (badges, leaderboard, levels)

## Use case ideas
New user visits landing page, logs in, and creates a profile (How do they discover how SkillSwap works?)
User browses skills and joins a session
User creates a Skill Session and receives responses
User receives a notification and joins a “Right Now” help session
Admin logs in and moderates content or users
User checks their progress (points, badges, level)

## Beyond the basics
After implementing core features, here are ideas for advanced functionality:
	•	Text message notifications for session updates and confirmations
	•	Integration with school platforms (e.g., Google Classroom or Slack)
	•	AI-powered skill matching (suggest people you should connect with)
	•	Reputation system based on ratings and feedback
	•	Mini skill courses (structured multi-session learning paths)
	•	QR code check-ins for session attendance verification
