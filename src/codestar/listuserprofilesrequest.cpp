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

#include "listuserprofilesrequest.h"
#include "listuserprofilesrequest_p.h"
#include "listuserprofilesresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::ListUserProfilesRequest
 *
 * \brief The ListUserProfilesRequest class provides an interface for CodeStar ListUserProfiles requests.
 *
 * \ingroup CodeStar
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
 * \sa CodeStarClient::listUserProfiles
 */

/*!
 * @brief  Constructs a new ListUserProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserProfilesRequest::ListUserProfilesRequest(const ListUserProfilesRequest &other)
    : CodeStarRequest(new ListUserProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListUserProfilesRequest object.
 */
ListUserProfilesRequest::ListUserProfilesRequest()
    : CodeStarRequest(new ListUserProfilesRequestPrivate(CodeStarRequest::ListUserProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserProfilesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListUserProfilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserProfilesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListUserProfilesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListUserProfilesRequestPrivate
 *
 * @brief  Private implementation for ListUserProfilesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListUserProfilesRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public ListUserProfilesRequest instance.
 */
ListUserProfilesRequestPrivate::ListUserProfilesRequestPrivate(
    const CodeStarRequest::Action action, ListUserProfilesRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListUserProfilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserProfilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserProfilesRequest instance.
 */
ListUserProfilesRequestPrivate::ListUserProfilesRequestPrivate(
    const ListUserProfilesRequestPrivate &other, ListUserProfilesRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
