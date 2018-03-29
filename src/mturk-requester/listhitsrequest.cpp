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

#include "listhitsrequest.h"
#include "listhitsrequest_p.h"
#include "listhitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ListHITsRequest
 *
 * @brief  Implements MTurk ListHITs requests.
 *
 * @see    MTurkClient::listHITs
 */

/**
 * @brief  Constructs a new ListHITsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHITsRequest::ListHITsRequest(const ListHITsRequest &other)
    : MTurkRequest(new ListHITsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHITsRequest object.
 */
ListHITsRequest::ListHITsRequest()
    : MTurkRequest(new ListHITsRequestPrivate(MTurkRequest::ListHITsAction, this))
{

}

bool ListHITsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHITsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHITsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListHITsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHITsRequestPrivate
 *
 * @brief  Private implementation for ListHITsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListHITsRequest instance.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const MTurkRequest::Action action, ListHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHITsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHITsRequest instance.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const ListHITsRequestPrivate &other, ListHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
