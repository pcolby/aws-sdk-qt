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

#include "createkeyrequest.h"
#include "createkeyrequest_p.h"
#include "createkeyresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  CreateKeyRequest
 *
 * @brief  Implements KMS CreateKey requests.
 *
 * @see    KMSClient::createKey
 */

/**
 * @brief  Constructs a new CreateKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeyResponse::CreateKeyResponse(

/**
 * @brief  Constructs a new CreateKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateKeyRequest::CreateKeyRequest(const CreateKeyRequest &other)
    : KMSRequest(new CreateKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateKeyRequest object.
 */
CreateKeyRequest::CreateKeyRequest()
    : KMSRequest(new CreateKeyRequestPrivate(KMSRequest::CreateKeyAction, this))
{

}

bool CreateKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * CreateKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateKeyRequestPrivate
 *
 * @brief  Private implementation for CreateKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public CreateKeyRequest instance.
 */
CreateKeyRequestPrivate::CreateKeyRequestPrivate(
    const KMSRequest::Action action, CreateKeyRequest * const q)
    : CreateKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateKeyRequest instance.
 */
CreateKeyRequestPrivate::CreateKeyRequestPrivate(
    const CreateKeyRequestPrivate &other, CreateKeyRequest * const q)
    : CreateKeyPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
