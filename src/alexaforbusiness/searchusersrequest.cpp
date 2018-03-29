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

#include "searchusersrequest.h"
#include "searchusersrequest_p.h"
#include "searchusersresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  SearchUsersRequest
 *
 * @brief  Implements AlexaForBusiness SearchUsers requests.
 *
 * @see    AlexaForBusinessClient::searchUsers
 */

/**
 * @brief  Constructs a new SearchUsersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchUsersRequest::SearchUsersRequest(const SearchUsersRequest &other)
    : AlexaForBusinessRequest(new SearchUsersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchUsersRequest object.
 */
SearchUsersRequest::SearchUsersRequest()
    : AlexaForBusinessRequest(new SearchUsersRequestPrivate(AlexaForBusinessRequest::SearchUsersAction, this))
{

}

bool SearchUsersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchUsersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchUsersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * SearchUsersRequest::response(QNetworkReply * const reply) const
{
    return new SearchUsersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchUsersRequestPrivate
 *
 * @brief  Private implementation for SearchUsersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchUsersRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public SearchUsersRequest instance.
 */
SearchUsersRequestPrivate::SearchUsersRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchUsersRequest * const q)
    : SearchUsersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchUsersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchUsersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchUsersRequest instance.
 */
SearchUsersRequestPrivate::SearchUsersRequestPrivate(
    const SearchUsersRequestPrivate &other, SearchUsersRequest * const q)
    : SearchUsersPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
