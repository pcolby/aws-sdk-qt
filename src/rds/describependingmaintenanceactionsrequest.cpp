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

#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsrequest_p.h"
#include "describependingmaintenanceactionsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribePendingMaintenanceActionsRequest
 *
 * @brief  Implements RDS DescribePendingMaintenanceActions requests.
 *
 * @see    RDSClient::describePendingMaintenanceActions
 */

/**
 * @brief  Constructs a new DescribePendingMaintenanceActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest(const DescribePendingMaintenanceActionsRequest &other)
    : RDSRequest(new DescribePendingMaintenanceActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePendingMaintenanceActionsRequest object.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest()
    : RDSRequest(new DescribePendingMaintenanceActionsRequestPrivate(RDSRequest::DescribePendingMaintenanceActionsAction, this))
{

}

bool DescribePendingMaintenanceActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePendingMaintenanceActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePendingMaintenanceActionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribePendingMaintenanceActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePendingMaintenanceActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePendingMaintenanceActionsRequestPrivate
 *
 * @brief  Private implementation for DescribePendingMaintenanceActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingMaintenanceActionsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribePendingMaintenanceActionsRequest instance.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const RDSRequest::Action action, DescribePendingMaintenanceActionsRequest * const q)
    : DescribePendingMaintenanceActionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingMaintenanceActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePendingMaintenanceActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePendingMaintenanceActionsRequest instance.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const DescribePendingMaintenanceActionsRequestPrivate &other, DescribePendingMaintenanceActionsRequest * const q)
    : DescribePendingMaintenanceActionsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
