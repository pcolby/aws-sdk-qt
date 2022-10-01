// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforprojectrequest.h"
#include "listtagsforprojectrequest_p.h"
#include "listtagsforprojectresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::ListTagsForProjectRequest
 * \brief The ListTagsForProjectRequest class provides an interface for CodeStar ListTagsForProject requests.
 *
 * \inmodule QtAwsCodeStar
 *
 *  <fullname>AWS CodeStar</fullname>
 * 
 *  This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 *  the AWS CodeStar API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeStar API to work
 * 
 *  with>
 * 
 *  Projects and their resources, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>DeleteProject</code>, which deletes a
 * 
 *  project> </li> <li>
 * 
 *  <code>DescribeProject</code>, which lists the attributes of a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListProjects</code>, which lists all projects associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <code>ListResources</code>, which lists the resources associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTagsForProject</code>, which lists the tags associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>TagProject</code>, which adds tags to a
 * 
 *  project> </li> <li>
 * 
 *  <code>UntagProject</code>, which removes tags from a
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>, which updates the attributes of a
 * 
 *  project> </li> </ul>
 * 
 *  Teams and team members, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 * 
 *  attributes> </li> <li>
 * 
 *  <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 * 
 *  project> </li> </ul>
 * 
 *  Users, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DeleteUserProfile</code>, which deletes all user profile information across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DescribeUserProfile</code>, which describes the profile of a
 * 
 *  user> </li> <li>
 * 
 *  <code>ListUserProfiles</code>, which lists all user
 * 
 *  profiles> </li> <li>
 * 
 *  <code>UpdateUserProfile</code>, which updates the profile for a
 *
 * \sa CodeStarClient::listTagsForProject
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForProjectRequest::ListTagsForProjectRequest(const ListTagsForProjectRequest &other)
    : CodeStarRequest(new ListTagsForProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForProjectRequest object.
 */
ListTagsForProjectRequest::ListTagsForProjectRequest()
    : CodeStarRequest(new ListTagsForProjectRequestPrivate(CodeStarRequest::ListTagsForProjectAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForProjectResponse(*this, reply);
}

/*!
 * \class QtAws::CodeStar::ListTagsForProjectRequestPrivate
 * \brief The ListTagsForProjectRequestPrivate class provides private implementation for ListTagsForProjectRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a ListTagsForProjectRequestPrivate object for CodeStar \a action,
 * with public implementation \a q.
 */
ListTagsForProjectRequestPrivate::ListTagsForProjectRequestPrivate(
    const CodeStarRequest::Action action, ListTagsForProjectRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForProjectRequest
 * class' copy constructor.
 */
ListTagsForProjectRequestPrivate::ListTagsForProjectRequestPrivate(
    const ListTagsForProjectRequestPrivate &other, ListTagsForProjectRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
