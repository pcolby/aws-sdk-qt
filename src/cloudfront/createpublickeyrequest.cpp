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

#include "createpublickeyrequest.h"
#include "createpublickeyrequest_p.h"
#include "createpublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreatePublicKeyRequest
 *
 * @brief  Implements CloudFront CreatePublicKey requests.
 *
 * @see    CloudFrontClient::createPublicKey
 */

/**
 * @brief  Constructs a new CreatePublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePublicKeyRequest::CreatePublicKeyRequest(const CreatePublicKeyRequest &other)
    : CloudFrontRequest(new CreatePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePublicKeyRequest object.
 */
CreatePublicKeyRequest::CreatePublicKeyRequest()
    : CloudFrontRequest(new CreatePublicKeyRequestPrivate(CloudFrontRequest::CreatePublicKeyAction, this))
{

}

bool CreatePublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePublicKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePublicKeyRequestPrivate
 *
 * @brief  Private implementation for CreatePublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicKeyRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreatePublicKeyRequest instance.
 */
CreatePublicKeyRequestPrivate::CreatePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, CreatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePublicKeyRequest instance.
 */
CreatePublicKeyRequestPrivate::CreatePublicKeyRequestPrivate(
    const CreatePublicKeyRequestPrivate &other, CreatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
