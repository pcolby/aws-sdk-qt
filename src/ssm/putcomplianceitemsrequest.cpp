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

#include "putcomplianceitemsrequest.h"
#include "putcomplianceitemsrequest_p.h"
#include "putcomplianceitemsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  PutComplianceItemsRequest
 *
 * @brief  Implements SSM PutComplianceItems requests.
 *
 * @see    SSMClient::putComplianceItems
 */

/**
 * @brief  Constructs a new PutComplianceItemsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutComplianceItemsRequest::PutComplianceItemsRequest(const PutComplianceItemsRequest &other)
    : SSMRequest(new PutComplianceItemsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutComplianceItemsRequest object.
 */
PutComplianceItemsRequest::PutComplianceItemsRequest()
    : SSMRequest(new PutComplianceItemsRequestPrivate(SSMRequest::PutComplianceItemsAction, this))
{

}

bool PutComplianceItemsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutComplianceItemsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutComplianceItemsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * PutComplianceItemsRequest::response(QNetworkReply * const reply) const
{
    return new PutComplianceItemsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutComplianceItemsRequestPrivate
 *
 * @brief  Private implementation for PutComplianceItemsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutComplianceItemsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public PutComplianceItemsRequest instance.
 */
PutComplianceItemsRequestPrivate::PutComplianceItemsRequestPrivate(
    const SSMRequest::Action action, PutComplianceItemsRequest * const q)
    : PutComplianceItemsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutComplianceItemsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutComplianceItemsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutComplianceItemsRequest instance.
 */
PutComplianceItemsRequestPrivate::PutComplianceItemsRequestPrivate(
    const PutComplianceItemsRequestPrivate &other, PutComplianceItemsRequest * const q)
    : PutComplianceItemsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
