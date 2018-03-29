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

#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityrequest_p.h"
#include "batchchecklayeravailabilityresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  BatchCheckLayerAvailabilityRequest
 *
 * @brief  Implements ECR BatchCheckLayerAvailability requests.
 *
 * @see    ECRClient::batchCheckLayerAvailability
 */

/**
 * @brief  Constructs a new BatchCheckLayerAvailabilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest(const BatchCheckLayerAvailabilityRequest &other)
    : ECRRequest(new BatchCheckLayerAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchCheckLayerAvailabilityRequest object.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest()
    : ECRRequest(new BatchCheckLayerAvailabilityRequestPrivate(ECRRequest::BatchCheckLayerAvailabilityAction, this))
{

}

bool BatchCheckLayerAvailabilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchCheckLayerAvailabilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchCheckLayerAvailabilityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * BatchCheckLayerAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new BatchCheckLayerAvailabilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchCheckLayerAvailabilityRequestPrivate
 *
 * @brief  Private implementation for BatchCheckLayerAvailabilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchCheckLayerAvailabilityRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public BatchCheckLayerAvailabilityRequest instance.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const ECRRequest::Action action, BatchCheckLayerAvailabilityRequest * const q)
    : BatchCheckLayerAvailabilityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchCheckLayerAvailabilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchCheckLayerAvailabilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchCheckLayerAvailabilityRequest instance.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const BatchCheckLayerAvailabilityRequestPrivate &other, BatchCheckLayerAvailabilityRequest * const q)
    : BatchCheckLayerAvailabilityPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
