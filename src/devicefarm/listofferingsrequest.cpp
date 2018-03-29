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

#include "listofferingsrequest.h"
#include "listofferingsrequest_p.h"
#include "listofferingsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListOfferingsRequest
 *
 * @brief  Implements DeviceFarm ListOfferings requests.
 *
 * @see    DeviceFarmClient::listOfferings
 */

/**
 * @brief  Constructs a new ListOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOfferingsRequest::ListOfferingsRequest(const ListOfferingsRequest &other)
    : DeviceFarmRequest(new ListOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOfferingsRequest object.
 */
ListOfferingsRequest::ListOfferingsRequest()
    : DeviceFarmRequest(new ListOfferingsRequestPrivate(DeviceFarmRequest::ListOfferingsAction, this))
{

}

bool ListOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOfferingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOfferingsRequestPrivate
 *
 * @brief  Private implementation for ListOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListOfferingsRequest instance.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingsRequest * const q)
    : ListOfferingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOfferingsRequest instance.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const ListOfferingsRequestPrivate &other, ListOfferingsRequest * const q)
    : ListOfferingsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
