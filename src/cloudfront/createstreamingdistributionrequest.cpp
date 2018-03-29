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

#include "createstreamingdistributionrequest.h"
#include "createstreamingdistributionrequest_p.h"
#include "createstreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreateStreamingDistributionRequest
 *
 * @brief  Implements CloudFront CreateStreamingDistribution requests.
 *
 * @see    CloudFrontClient::createStreamingDistribution
 */

/**
 * @brief  Constructs a new CreateStreamingDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamingDistributionRequest::CreateStreamingDistributionRequest(const CreateStreamingDistributionRequest &other)
    : CloudFrontRequest(new CreateStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStreamingDistributionRequest object.
 */
CreateStreamingDistributionRequest::CreateStreamingDistributionRequest()
    : CloudFrontRequest(new CreateStreamingDistributionRequestPrivate(CloudFrontRequest::CreateStreamingDistributionAction, this))
{

}

bool CreateStreamingDistributionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStreamingDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamingDistributionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * CreateStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingDistributionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStreamingDistributionRequestPrivate
 *
 * @brief  Private implementation for CreateStreamingDistributionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateStreamingDistributionRequest instance.
 */
CreateStreamingDistributionRequestPrivate::CreateStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, CreateStreamingDistributionRequest * const q)
    : CreateStreamingDistributionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamingDistributionRequest instance.
 */
CreateStreamingDistributionRequestPrivate::CreateStreamingDistributionRequestPrivate(
    const CreateStreamingDistributionRequestPrivate &other, CreateStreamingDistributionRequest * const q)
    : CreateStreamingDistributionPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
