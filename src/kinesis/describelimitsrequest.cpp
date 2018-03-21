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

#include "describelimitsrequest.h"
#include "describelimitsrequest_p.h"
#include "describelimitsresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  DescribeLimitsRequest
 *
 * @brief  Implements Kinesis DescribeLimits requests.
 *
 * @see    KinesisClient::describeLimits
 */

/**
 * @brief  Constructs a new DescribeLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLimitsRequest::DescribeLimitsRequest(const DescribeLimitsRequest &other)
    : KinesisRequest(new DescribeLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLimitsRequest object.
 */
DescribeLimitsRequest::DescribeLimitsRequest()
    : KinesisRequest(new DescribeLimitsRequestPrivate(KinesisRequest::DescribeLimitsAction, this))
{

}

bool DescribeLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLimitsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * DescribeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLimitsRequestPrivate
 *
 * @brief  Private implementation for DescribeLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLimitsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DescribeLimitsRequest instance.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const KinesisRequest::Action action, DescribeLimitsRequest * const q)
    : DescribeLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLimitsRequest instance.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const DescribeLimitsRequestPrivate &other, DescribeLimitsRequest * const q)
    : DescribeLimitsPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace AWS
