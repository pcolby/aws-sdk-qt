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

#include "getcloudfrontoriginaccessidentityrequest.h"
#include "getcloudfrontoriginaccessidentityrequest_p.h"
#include "getcloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetCloudFrontOriginAccessIdentityRequest
 *
 * @brief  Implements CloudFront GetCloudFrontOriginAccessIdentity requests.
 *
 * @see    CloudFrontClient::getCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCloudFrontOriginAccessIdentityRequest::GetCloudFrontOriginAccessIdentityRequest(const GetCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityRequest object.
 */
GetCloudFrontOriginAccessIdentityRequest::GetCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::GetCloudFrontOriginAccessIdentityAction, this))
{

}

bool GetCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCloudFrontOriginAccessIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * GetCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCloudFrontOriginAccessIdentityRequestPrivate
 *
 * @brief  Private implementation for GetCloudFrontOriginAccessIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetCloudFrontOriginAccessIdentityRequest instance.
 */
GetCloudFrontOriginAccessIdentityRequestPrivate::GetCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, GetCloudFrontOriginAccessIdentityRequest * const q)
    : GetCloudFrontOriginAccessIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCloudFrontOriginAccessIdentityRequest instance.
 */
GetCloudFrontOriginAccessIdentityRequestPrivate::GetCloudFrontOriginAccessIdentityRequestPrivate(
    const GetCloudFrontOriginAccessIdentityRequestPrivate &other, GetCloudFrontOriginAccessIdentityRequest * const q)
    : GetCloudFrontOriginAccessIdentityPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
