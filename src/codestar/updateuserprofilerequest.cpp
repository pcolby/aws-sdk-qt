/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateuserprofilerequest.h"
#include "updateuserprofilerequest_p.h"
#include "updateuserprofileresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::UpdateUserProfileRequest
 * \brief The UpdateUserProfileRequest class provides an interface for CodeStar UpdateUserProfile requests.
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
 * \sa CodeStarClient::updateUserProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest(const UpdateUserProfileRequest &other)
    : CodeStarRequest(new UpdateUserProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserProfileRequest object.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest()
    : CodeStarRequest(new UpdateUserProfileRequestPrivate(CodeStarRequest::UpdateUserProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CodeStar::UpdateUserProfileRequestPrivate
 * \brief The UpdateUserProfileRequestPrivate class provides private implementation for UpdateUserProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 *
 * Constructs a UpdateUserProfileRequestPrivate object for CodeStar \a action with,
 * public implementation \a q.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const CodeStarRequest::Action action, UpdateUserProfileRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserProfileRequest
 * class' copy constructor.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const UpdateUserProfileRequestPrivate &other, UpdateUserProfileRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
