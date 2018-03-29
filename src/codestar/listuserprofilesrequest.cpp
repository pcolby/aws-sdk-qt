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

/**
 * @class  ListUserProfilesRequest
 *
 * @brief  Implements CodeStar ListUserProfiles requests.
 *
 * @see    CodeStarClient::listUserProfiles
 */

/**
 * @brief  Constructs a new ListUserProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserProfilesRequest::ListUserProfilesRequest(const ListUserProfilesRequest &other)
    : CodeStarRequest(new ListUserProfilesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUserProfilesRequest object.
 */
ListUserProfilesRequest::ListUserProfilesRequest()
    : CodeStarRequest(new ListUserProfilesRequestPrivate(CodeStarRequest::ListUserProfilesAction, this))
{

}

bool ListUserProfilesRequest::isValid() const
{
    return false;
}


/**
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

/**
 * @internal
 *
 * @class  ListUserProfilesRequestPrivate
 *
 * @brief  Private implementation for ListUserProfilesRequest.
 */

/**
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

/**
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
