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

#include "deletepublickeyrequest.h"
#include "deletepublickeyrequest_p.h"
#include "deletepublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeletePublicKeyRequest
 *
 * @brief  Implements CloudFront DeletePublicKey requests.
 *
 * @see    CloudFrontClient::deletePublicKey
 */

/**
 * @brief  Constructs a new DeletePublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePublicKeyRequest::DeletePublicKeyRequest(const DeletePublicKeyRequest &other)
    : CloudFrontRequest(new DeletePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePublicKeyRequest object.
 */
DeletePublicKeyRequest::DeletePublicKeyRequest()
    : CloudFrontRequest(new DeletePublicKeyRequestPrivate(CloudFrontRequest::DeletePublicKeyAction, this))
{

}

bool DeletePublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePublicKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePublicKeyRequestPrivate
 *
 * @brief  Private implementation for DeletePublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePublicKeyRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeletePublicKeyRequest instance.
 */
DeletePublicKeyRequestPrivate::DeletePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, DeletePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePublicKeyRequest instance.
 */
DeletePublicKeyRequestPrivate::DeletePublicKeyRequestPrivate(
    const DeletePublicKeyRequestPrivate &other, DeletePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
