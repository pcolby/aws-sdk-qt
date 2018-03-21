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

#include "createaccesskeyrequest.h"
#include "createaccesskeyrequest_p.h"
#include "createaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateAccessKeyRequest
 *
 * @brief  Implements IAM CreateAccessKey requests.
 *
 * @see    IAMClient::createAccessKey
 */

/**
 * @brief  Constructs a new CreateAccessKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAccessKeyResponse::CreateAccessKeyResponse(

/**
 * @brief  Constructs a new CreateAccessKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAccessKeyRequest::CreateAccessKeyRequest(const CreateAccessKeyRequest &other)
    : IAMRequest(new CreateAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAccessKeyRequest object.
 */
CreateAccessKeyRequest::CreateAccessKeyRequest()
    : IAMRequest(new CreateAccessKeyRequestPrivate(IAMRequest::CreateAccessKeyAction, this))
{

}

bool CreateAccessKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAccessKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAccessKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAccessKeyRequestPrivate
 *
 * @brief  Private implementation for CreateAccessKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccessKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateAccessKeyRequest instance.
 */
CreateAccessKeyRequestPrivate::CreateAccessKeyRequestPrivate(
    const IAMRequest::Action action, CreateAccessKeyRequest * const q)
    : CreateAccessKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccessKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAccessKeyRequest instance.
 */
CreateAccessKeyRequestPrivate::CreateAccessKeyRequestPrivate(
    const CreateAccessKeyRequestPrivate &other, CreateAccessKeyRequest * const q)
    : CreateAccessKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
