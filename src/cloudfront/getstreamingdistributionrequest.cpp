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

#include "getstreamingdistributionrequest.h"
#include "getstreamingdistributionrequest_p.h"
#include "getstreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetStreamingDistributionRequest
 *
 * @brief  Implements CloudFront GetStreamingDistribution requests.
 *
 * @see    CloudFrontClient::getStreamingDistribution
 */

/**
 * @brief  Constructs a new GetStreamingDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStreamingDistributionRequest::GetStreamingDistributionRequest(const GetStreamingDistributionRequest &other)
    : CloudFrontRequest(new GetStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStreamingDistributionRequest object.
 */
GetStreamingDistributionRequest::GetStreamingDistributionRequest()
    : CloudFrontRequest(new GetStreamingDistributionRequestPrivate(CloudFrontRequest::GetStreamingDistributionAction, this))
{

}

bool GetStreamingDistributionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStreamingDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStreamingDistributionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * GetStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingDistributionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStreamingDistributionRequestPrivate
 *
 * @brief  Private implementation for GetStreamingDistributionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetStreamingDistributionRequest instance.
 */
GetStreamingDistributionRequestPrivate::GetStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, GetStreamingDistributionRequest * const q)
    : GetStreamingDistributionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStreamingDistributionRequest instance.
 */
GetStreamingDistributionRequestPrivate::GetStreamingDistributionRequestPrivate(
    const GetStreamingDistributionRequestPrivate &other, GetStreamingDistributionRequest * const q)
    : GetStreamingDistributionPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
