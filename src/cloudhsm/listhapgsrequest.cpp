/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listhapgsrequest.h"
#include "listhapgsrequest_p.h"
#include "listhapgsresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListHapgsRequest
 *
 * @brief  Implements CloudHSM ListHapgs requests.
 *
 * @see    CloudHSMClient::listHapgs
 */

/**
 * @brief  Constructs a new ListHapgsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHapgsRequest::ListHapgsRequest(const ListHapgsRequest &other)
    : CloudHSMRequest(new ListHapgsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHapgsRequest object.
 */
ListHapgsRequest::ListHapgsRequest()
    : CloudHSMRequest(new ListHapgsRequestPrivate(CloudHSMRequest::ListHapgsAction, this))
{

}

bool ListHapgsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHapgsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHapgsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ListHapgsRequest::response(QNetworkReply * const reply) const
{
    return new ListHapgsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHapgsRequestPrivate
 *
 * @brief  Private implementation for ListHapgsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHapgsRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListHapgsRequest instance.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const CloudHSMRequest::Action action, ListHapgsRequest * const q)
    : ListHapgsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHapgsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHapgsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHapgsRequest instance.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const ListHapgsRequestPrivate &other, ListHapgsRequest * const q)
    : ListHapgsPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
