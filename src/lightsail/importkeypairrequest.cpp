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

#include "importkeypairrequest.h"
#include "importkeypairrequest_p.h"
#include "importkeypairresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  ImportKeyPairRequest
 *
 * @brief  Implements Lightsail ImportKeyPair requests.
 *
 * @see    LightsailClient::importKeyPair
 */

/**
 * @brief  Constructs a new ImportKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportKeyPairResponse::ImportKeyPairResponse(

/**
 * @brief  Constructs a new ImportKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportKeyPairRequest::ImportKeyPairRequest(const ImportKeyPairRequest &other)
    : LightsailRequest(new ImportKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportKeyPairRequest object.
 */
ImportKeyPairRequest::ImportKeyPairRequest()
    : LightsailRequest(new ImportKeyPairRequestPrivate(LightsailRequest::ImportKeyPairAction, this))
{

}

bool ImportKeyPairRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportKeyPairResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportKeyPairResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * ImportKeyPairRequest::response(QNetworkReply * const reply) const
{
    return new ImportKeyPairResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportKeyPairRequestPrivate
 *
 * @brief  Private implementation for ImportKeyPairRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportKeyPairRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public ImportKeyPairRequest instance.
 */
ImportKeyPairRequestPrivate::ImportKeyPairRequestPrivate(
    const LightsailRequest::Action action, ImportKeyPairRequest * const q)
    : ImportKeyPairPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportKeyPairRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportKeyPairRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportKeyPairRequest instance.
 */
ImportKeyPairRequestPrivate::ImportKeyPairRequestPrivate(
    const ImportKeyPairRequestPrivate &other, ImportKeyPairRequest * const q)
    : ImportKeyPairPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
