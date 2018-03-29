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

#include "listprovisionedcapacityrequest.h"
#include "listprovisionedcapacityrequest_p.h"
#include "listprovisionedcapacityresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  ListProvisionedCapacityRequest
 *
 * @brief  Implements Glacier ListProvisionedCapacity requests.
 *
 * @see    GlacierClient::listProvisionedCapacity
 */

/**
 * @brief  Constructs a new ListProvisionedCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProvisionedCapacityRequest::ListProvisionedCapacityRequest(const ListProvisionedCapacityRequest &other)
    : GlacierRequest(new ListProvisionedCapacityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListProvisionedCapacityRequest object.
 */
ListProvisionedCapacityRequest::ListProvisionedCapacityRequest()
    : GlacierRequest(new ListProvisionedCapacityRequestPrivate(GlacierRequest::ListProvisionedCapacityAction, this))
{

}

bool ListProvisionedCapacityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListProvisionedCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProvisionedCapacityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisionedCapacityRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisionedCapacityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListProvisionedCapacityRequestPrivate
 *
 * @brief  Private implementation for ListProvisionedCapacityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisionedCapacityRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListProvisionedCapacityRequest instance.
 */
ListProvisionedCapacityRequestPrivate::ListProvisionedCapacityRequestPrivate(
    const GlacierRequest::Action action, ListProvisionedCapacityRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisionedCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProvisionedCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProvisionedCapacityRequest instance.
 */
ListProvisionedCapacityRequestPrivate::ListProvisionedCapacityRequestPrivate(
    const ListProvisionedCapacityRequestPrivate &other, ListProvisionedCapacityRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
