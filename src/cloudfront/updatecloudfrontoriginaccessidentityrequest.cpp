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

#include "updatecloudfrontoriginaccessidentityrequest.h"
#include "updatecloudfrontoriginaccessidentityrequest_p.h"
#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  UpdateCloudFrontOriginAccessIdentityRequest
 *
 * @brief  Implements CloudFront UpdateCloudFrontOriginAccessIdentity requests.
 *
 * @see    CloudFrontClient::updateCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCloudFrontOriginAccessIdentityRequest::UpdateCloudFrontOriginAccessIdentityRequest(const UpdateCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new UpdateCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityRequest object.
 */
UpdateCloudFrontOriginAccessIdentityRequest::UpdateCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new UpdateCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::UpdateCloudFrontOriginAccessIdentityAction, this))
{

}

bool UpdateCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCloudFrontOriginAccessIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * UpdateCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCloudFrontOriginAccessIdentityRequestPrivate
 *
 * @brief  Private implementation for UpdateCloudFrontOriginAccessIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdateCloudFrontOriginAccessIdentityRequest instance.
 */
UpdateCloudFrontOriginAccessIdentityRequestPrivate::UpdateCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, UpdateCloudFrontOriginAccessIdentityRequest * const q)
    : UpdateCloudFrontOriginAccessIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCloudFrontOriginAccessIdentityRequest instance.
 */
UpdateCloudFrontOriginAccessIdentityRequestPrivate::UpdateCloudFrontOriginAccessIdentityRequestPrivate(
    const UpdateCloudFrontOriginAccessIdentityRequestPrivate &other, UpdateCloudFrontOriginAccessIdentityRequest * const q)
    : UpdateCloudFrontOriginAccessIdentityPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
