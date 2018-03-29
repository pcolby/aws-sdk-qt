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

#include "updatepublickeyrequest.h"
#include "updatepublickeyrequest_p.h"
#include "updatepublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  UpdatePublicKeyRequest
 *
 * @brief  Implements CloudFront UpdatePublicKey requests.
 *
 * @see    CloudFrontClient::updatePublicKey
 */

/**
 * @brief  Constructs a new UpdatePublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePublicKeyRequest::UpdatePublicKeyRequest(const UpdatePublicKeyRequest &other)
    : CloudFrontRequest(new UpdatePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePublicKeyRequest object.
 */
UpdatePublicKeyRequest::UpdatePublicKeyRequest()
    : CloudFrontRequest(new UpdatePublicKeyRequestPrivate(CloudFrontRequest::UpdatePublicKeyAction, this))
{

}

bool UpdatePublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePublicKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePublicKeyRequestPrivate
 *
 * @brief  Private implementation for UpdatePublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePublicKeyRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdatePublicKeyRequest instance.
 */
UpdatePublicKeyRequestPrivate::UpdatePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, UpdatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePublicKeyRequest instance.
 */
UpdatePublicKeyRequestPrivate::UpdatePublicKeyRequestPrivate(
    const UpdatePublicKeyRequestPrivate &other, UpdatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
