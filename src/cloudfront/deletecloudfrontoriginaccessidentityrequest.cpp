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

#include "deletecloudfrontoriginaccessidentityrequest.h"
#include "deletecloudfrontoriginaccessidentityrequest_p.h"
#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteCloudFrontOriginAccessIdentityRequest
 *
 * @brief  Implements CloudFront DeleteCloudFrontOriginAccessIdentity requests.
 *
 * @see    CloudFrontClient::deleteCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCloudFrontOriginAccessIdentityRequest::DeleteCloudFrontOriginAccessIdentityRequest(const DeleteCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new DeleteCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityRequest object.
 */
DeleteCloudFrontOriginAccessIdentityRequest::DeleteCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new DeleteCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::DeleteCloudFrontOriginAccessIdentityAction, this))
{

}

bool DeleteCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCloudFrontOriginAccessIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * DeleteCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCloudFrontOriginAccessIdentityRequestPrivate
 *
 * @brief  Private implementation for DeleteCloudFrontOriginAccessIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeleteCloudFrontOriginAccessIdentityRequest instance.
 */
DeleteCloudFrontOriginAccessIdentityRequestPrivate::DeleteCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, DeleteCloudFrontOriginAccessIdentityRequest * const q)
    : DeleteCloudFrontOriginAccessIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCloudFrontOriginAccessIdentityRequest instance.
 */
DeleteCloudFrontOriginAccessIdentityRequestPrivate::DeleteCloudFrontOriginAccessIdentityRequestPrivate(
    const DeleteCloudFrontOriginAccessIdentityRequestPrivate &other, DeleteCloudFrontOriginAccessIdentityRequest * const q)
    : DeleteCloudFrontOriginAccessIdentityPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
