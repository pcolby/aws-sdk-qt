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

#include "searchcontactsrequest.h"
#include "searchcontactsrequest_p.h"
#include "searchcontactsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  SearchContactsRequest
 *
 * @brief  Implements AlexaForBusiness SearchContacts requests.
 *
 * @see    AlexaForBusinessClient::searchContacts
 */

/**
 * @brief  Constructs a new SearchContactsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchContactsRequest::SearchContactsRequest(const SearchContactsRequest &other)
    : AlexaForBusinessRequest(new SearchContactsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchContactsRequest object.
 */
SearchContactsRequest::SearchContactsRequest()
    : AlexaForBusinessRequest(new SearchContactsRequestPrivate(AlexaForBusinessRequest::SearchContactsAction, this))
{

}

bool SearchContactsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchContactsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchContactsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchContactsRequest::response(QNetworkReply * const reply) const
{
    return new SearchContactsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchContactsRequestPrivate
 *
 * @brief  Private implementation for SearchContactsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchContactsRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public SearchContactsRequest instance.
 */
SearchContactsRequestPrivate::SearchContactsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchContactsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchContactsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchContactsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchContactsRequest instance.
 */
SearchContactsRequestPrivate::SearchContactsRequestPrivate(
    const SearchContactsRequestPrivate &other, SearchContactsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
