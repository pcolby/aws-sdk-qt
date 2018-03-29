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

#include "decreasestreamretentionperiodrequest.h"
#include "decreasestreamretentionperiodrequest_p.h"
#include "decreasestreamretentionperiodresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  DecreaseStreamRetentionPeriodRequest
 *
 * @brief  Implements Kinesis DecreaseStreamRetentionPeriod requests.
 *
 * @see    KinesisClient::decreaseStreamRetentionPeriod
 */

/**
 * @brief  Constructs a new DecreaseStreamRetentionPeriodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DecreaseStreamRetentionPeriodRequest::DecreaseStreamRetentionPeriodRequest(const DecreaseStreamRetentionPeriodRequest &other)
    : KinesisRequest(new DecreaseStreamRetentionPeriodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DecreaseStreamRetentionPeriodRequest object.
 */
DecreaseStreamRetentionPeriodRequest::DecreaseStreamRetentionPeriodRequest()
    : KinesisRequest(new DecreaseStreamRetentionPeriodRequestPrivate(KinesisRequest::DecreaseStreamRetentionPeriodAction, this))
{

}

bool DecreaseStreamRetentionPeriodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DecreaseStreamRetentionPeriodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DecreaseStreamRetentionPeriodResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseStreamRetentionPeriodRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseStreamRetentionPeriodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DecreaseStreamRetentionPeriodRequestPrivate
 *
 * @brief  Private implementation for DecreaseStreamRetentionPeriodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseStreamRetentionPeriodRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DecreaseStreamRetentionPeriodRequest instance.
 */
DecreaseStreamRetentionPeriodRequestPrivate::DecreaseStreamRetentionPeriodRequestPrivate(
    const KinesisRequest::Action action, DecreaseStreamRetentionPeriodRequest * const q)
    : DecreaseStreamRetentionPeriodPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseStreamRetentionPeriodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DecreaseStreamRetentionPeriodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DecreaseStreamRetentionPeriodRequest instance.
 */
DecreaseStreamRetentionPeriodRequestPrivate::DecreaseStreamRetentionPeriodRequestPrivate(
    const DecreaseStreamRetentionPeriodRequestPrivate &other, DecreaseStreamRetentionPeriodRequest * const q)
    : DecreaseStreamRetentionPeriodPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
