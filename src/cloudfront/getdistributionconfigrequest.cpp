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

#include "getdistributionconfigrequest.h"
#include "getdistributionconfigrequest_p.h"
#include "getdistributionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  GetDistributionConfigRequest
 *
 * @brief  Implements CloudFront GetDistributionConfig requests.
 *
 * @see    CloudFrontClient::getDistributionConfig
 */

/**
 * @brief  Constructs a new GetDistributionConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDistributionConfigRequest::GetDistributionConfigRequest(const GetDistributionConfigRequest &other)
    : CloudFrontRequest(new GetDistributionConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDistributionConfigRequest object.
 */
GetDistributionConfigRequest::GetDistributionConfigRequest()
    : CloudFrontRequest(new GetDistributionConfigRequestPrivate(CloudFrontRequest::GetDistributionConfigAction, this))
{

}

bool GetDistributionConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDistributionConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDistributionConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * GetDistributionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDistributionConfigRequestPrivate
 *
 * @brief  Private implementation for GetDistributionConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDistributionConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetDistributionConfigRequest instance.
 */
GetDistributionConfigRequestPrivate::GetDistributionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetDistributionConfigRequest * const q)
    : GetDistributionConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDistributionConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDistributionConfigRequest instance.
 */
GetDistributionConfigRequestPrivate::GetDistributionConfigRequestPrivate(
    const GetDistributionConfigRequestPrivate &other, GetDistributionConfigRequest * const q)
    : GetDistributionConfigPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
