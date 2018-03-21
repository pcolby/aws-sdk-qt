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

#include "describeeffectiveinstanceassociationsrequest.h"
#include "describeeffectiveinstanceassociationsrequest_p.h"
#include "describeeffectiveinstanceassociationsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeEffectiveInstanceAssociationsRequest
 *
 * @brief  Implements SSM DescribeEffectiveInstanceAssociations requests.
 *
 * @see    SSMClient::describeEffectiveInstanceAssociations
 */

/**
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEffectiveInstanceAssociationsResponse::DescribeEffectiveInstanceAssociationsResponse(

/**
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEffectiveInstanceAssociationsRequest::DescribeEffectiveInstanceAssociationsRequest(const DescribeEffectiveInstanceAssociationsRequest &other)
    : SSMRequest(new DescribeEffectiveInstanceAssociationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsRequest object.
 */
DescribeEffectiveInstanceAssociationsRequest::DescribeEffectiveInstanceAssociationsRequest()
    : SSMRequest(new DescribeEffectiveInstanceAssociationsRequestPrivate(SSMRequest::DescribeEffectiveInstanceAssociationsAction, this))
{

}

bool DescribeEffectiveInstanceAssociationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEffectiveInstanceAssociationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEffectiveInstanceAssociationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeEffectiveInstanceAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEffectiveInstanceAssociationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEffectiveInstanceAssociationsRequestPrivate
 *
 * @brief  Private implementation for DescribeEffectiveInstanceAssociationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeEffectiveInstanceAssociationsRequest instance.
 */
DescribeEffectiveInstanceAssociationsRequestPrivate::DescribeEffectiveInstanceAssociationsRequestPrivate(
    const SSMRequest::Action action, DescribeEffectiveInstanceAssociationsRequest * const q)
    : DescribeEffectiveInstanceAssociationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEffectiveInstanceAssociationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEffectiveInstanceAssociationsRequest instance.
 */
DescribeEffectiveInstanceAssociationsRequestPrivate::DescribeEffectiveInstanceAssociationsRequestPrivate(
    const DescribeEffectiveInstanceAssociationsRequestPrivate &other, DescribeEffectiveInstanceAssociationsRequest * const q)
    : DescribeEffectiveInstanceAssociationsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
