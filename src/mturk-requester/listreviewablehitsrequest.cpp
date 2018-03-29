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

#include "listreviewablehitsrequest.h"
#include "listreviewablehitsrequest_p.h"
#include "listreviewablehitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ListReviewableHITsRequest
 *
 * @brief  Implements MTurk ListReviewableHITs requests.
 *
 * @see    MTurkClient::listReviewableHITs
 */

/**
 * @brief  Constructs a new ListReviewableHITsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest(const ListReviewableHITsRequest &other)
    : MTurkRequest(new ListReviewableHITsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListReviewableHITsRequest object.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest()
    : MTurkRequest(new ListReviewableHITsRequestPrivate(MTurkRequest::ListReviewableHITsAction, this))
{

}

bool ListReviewableHITsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListReviewableHITsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListReviewableHITsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReviewableHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListReviewableHITsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListReviewableHITsRequestPrivate
 *
 * @brief  Private implementation for ListReviewableHITsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewableHITsRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListReviewableHITsRequest instance.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const MTurkRequest::Action action, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewableHITsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListReviewableHITsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListReviewableHITsRequest instance.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const ListReviewableHITsRequestPrivate &other, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
