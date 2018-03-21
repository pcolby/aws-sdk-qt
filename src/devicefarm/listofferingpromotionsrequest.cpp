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

#include "listofferingpromotionsrequest.h"
#include "listofferingpromotionsrequest_p.h"
#include "listofferingpromotionsresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListOfferingPromotionsRequest
 *
 * @brief  Implements DeviceFarm ListOfferingPromotions requests.
 *
 * @see    DeviceFarmClient::listOfferingPromotions
 */

/**
 * @brief  Constructs a new ListOfferingPromotionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOfferingPromotionsResponse::ListOfferingPromotionsResponse(

/**
 * @brief  Constructs a new ListOfferingPromotionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest(const ListOfferingPromotionsRequest &other)
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOfferingPromotionsRequest object.
 */
ListOfferingPromotionsRequest::ListOfferingPromotionsRequest()
    : DeviceFarmRequest(new ListOfferingPromotionsRequestPrivate(DeviceFarmRequest::ListOfferingPromotionsAction, this))
{

}

bool ListOfferingPromotionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOfferingPromotionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOfferingPromotionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListOfferingPromotionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingPromotionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOfferingPromotionsRequestPrivate
 *
 * @brief  Private implementation for ListOfferingPromotionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingPromotionsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListOfferingPromotionsRequest instance.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListOfferingPromotionsRequest * const q)
    : ListOfferingPromotionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOfferingPromotionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingPromotionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOfferingPromotionsRequest instance.
 */
ListOfferingPromotionsRequestPrivate::ListOfferingPromotionsRequestPrivate(
    const ListOfferingPromotionsRequestPrivate &other, ListOfferingPromotionsRequest * const q)
    : ListOfferingPromotionsPrivate(other, q)
{

}
