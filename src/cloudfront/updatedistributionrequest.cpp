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

#include "updatedistributionrequest.h"
#include "updatedistributionrequest_p.h"
#include "updatedistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  UpdateDistributionRequest
 *
 * @brief  Implements CloudFront UpdateDistribution requests.
 *
 * @see    CloudFrontClient::updateDistribution
 */

/**
 * @brief  Constructs a new UpdateDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDistributionRequest::UpdateDistributionRequest(const UpdateDistributionRequest &other)
    : CloudFrontRequest(new UpdateDistributionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDistributionRequest object.
 */
UpdateDistributionRequest::UpdateDistributionRequest()
    : CloudFrontRequest(new UpdateDistributionRequestPrivate(CloudFrontRequest::UpdateDistributionAction, this))
{

}

bool UpdateDistributionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDistributionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * UpdateDistributionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDistributionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDistributionRequestPrivate
 *
 * @brief  Private implementation for UpdateDistributionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdateDistributionRequest instance.
 */
UpdateDistributionRequestPrivate::UpdateDistributionRequestPrivate(
    const CloudFrontRequest::Action action, UpdateDistributionRequest * const q)
    : UpdateDistributionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDistributionRequest instance.
 */
UpdateDistributionRequestPrivate::UpdateDistributionRequestPrivate(
    const UpdateDistributionRequestPrivate &other, UpdateDistributionRequest * const q)
    : UpdateDistributionPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
