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

#include "listavailablezonesrequest.h"
#include "listavailablezonesrequest_p.h"
#include "listavailablezonesresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListAvailableZonesRequest
 *
 * @brief  Implements CloudHSM ListAvailableZones requests.
 *
 * @see    CloudHSMClient::listAvailableZones
 */

/**
 * @brief  Constructs a new ListAvailableZonesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAvailableZonesResponse::ListAvailableZonesResponse(

/**
 * @brief  Constructs a new ListAvailableZonesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAvailableZonesRequest::ListAvailableZonesRequest(const ListAvailableZonesRequest &other)
    : CloudHSMRequest(new ListAvailableZonesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAvailableZonesRequest object.
 */
ListAvailableZonesRequest::ListAvailableZonesRequest()
    : CloudHSMRequest(new ListAvailableZonesRequestPrivate(CloudHSMRequest::ListAvailableZonesAction, this))
{

}

bool ListAvailableZonesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAvailableZonesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAvailableZonesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ListAvailableZonesRequest::response(QNetworkReply * const reply) const
{
    return new ListAvailableZonesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAvailableZonesRequestPrivate
 *
 * @brief  Private implementation for ListAvailableZonesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAvailableZonesRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListAvailableZonesRequest instance.
 */
ListAvailableZonesRequestPrivate::ListAvailableZonesRequestPrivate(
    const CloudHSMRequest::Action action, ListAvailableZonesRequest * const q)
    : ListAvailableZonesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAvailableZonesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAvailableZonesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAvailableZonesRequest instance.
 */
ListAvailableZonesRequestPrivate::ListAvailableZonesRequestPrivate(
    const ListAvailableZonesRequestPrivate &other, ListAvailableZonesRequest * const q)
    : ListAvailableZonesPrivate(other, q)
{

}
