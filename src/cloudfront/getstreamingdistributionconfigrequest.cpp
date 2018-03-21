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

#include "getstreamingdistributionconfigrequest.h"
#include "getstreamingdistributionconfigrequest_p.h"
#include "getstreamingdistributionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  GetStreamingDistributionConfigRequest
 *
 * @brief  Implements CloudFront GetStreamingDistributionConfig requests.
 *
 * @see    CloudFrontClient::getStreamingDistributionConfig
 */

/**
 * @brief  Constructs a new GetStreamingDistributionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStreamingDistributionConfigResponse::GetStreamingDistributionConfigResponse(

/**
 * @brief  Constructs a new GetStreamingDistributionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest(const GetStreamingDistributionConfigRequest &other)
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStreamingDistributionConfigRequest object.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest()
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(CloudFrontRequest::GetStreamingDistributionConfigAction, this))
{

}

bool GetStreamingDistributionConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStreamingDistributionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStreamingDistributionConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * GetStreamingDistributionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingDistributionConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStreamingDistributionConfigRequestPrivate
 *
 * @brief  Private implementation for GetStreamingDistributionConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetStreamingDistributionConfigRequest instance.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetStreamingDistributionConfigRequest * const q)
    : GetStreamingDistributionConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingDistributionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStreamingDistributionConfigRequest instance.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const GetStreamingDistributionConfigRequestPrivate &other, GetStreamingDistributionConfigRequest * const q)
    : GetStreamingDistributionConfigPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
