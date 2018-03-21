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

#include "createkeypairrequest.h"
#include "createkeypairrequest_p.h"
#include "createkeypairresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateKeyPairRequest
 *
 * @brief  Implements Lightsail CreateKeyPair requests.
 *
 * @see    LightsailClient::createKeyPair
 */

/**
 * @brief  Constructs a new CreateKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeyPairResponse::CreateKeyPairResponse(

/**
 * @brief  Constructs a new CreateKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateKeyPairRequest::CreateKeyPairRequest(const CreateKeyPairRequest &other)
    : LightsailRequest(new CreateKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateKeyPairRequest object.
 */
CreateKeyPairRequest::CreateKeyPairRequest()
    : LightsailRequest(new CreateKeyPairRequestPrivate(LightsailRequest::CreateKeyPairAction, this))
{

}

bool CreateKeyPairRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateKeyPairResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateKeyPairResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateKeyPairRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyPairResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateKeyPairRequestPrivate
 *
 * @brief  Private implementation for CreateKeyPairRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyPairRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateKeyPairRequest instance.
 */
CreateKeyPairRequestPrivate::CreateKeyPairRequestPrivate(
    const LightsailRequest::Action action, CreateKeyPairRequest * const q)
    : CreateKeyPairPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeyPairRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyPairRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateKeyPairRequest instance.
 */
CreateKeyPairRequestPrivate::CreateKeyPairRequestPrivate(
    const CreateKeyPairRequestPrivate &other, CreateKeyPairRequest * const q)
    : CreateKeyPairPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
