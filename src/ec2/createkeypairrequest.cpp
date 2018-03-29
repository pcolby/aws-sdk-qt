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

#include "createkeypairrequest.h"
#include "createkeypairrequest_p.h"
#include "createkeypairresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateKeyPairRequest
 *
 * @brief  Implements EC2 CreateKeyPair requests.
 *
 * @see    EC2Client::createKeyPair
 */

/**
 * @brief  Constructs a new CreateKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateKeyPairRequest::CreateKeyPairRequest(const CreateKeyPairRequest &other)
    : EC2Request(new CreateKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateKeyPairRequest object.
 */
CreateKeyPairRequest::CreateKeyPairRequest()
    : EC2Request(new CreateKeyPairRequestPrivate(EC2Request::CreateKeyPairAction, this))
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
 * @see  EC2Client::send
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
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateKeyPairRequest instance.
 */
CreateKeyPairRequestPrivate::CreateKeyPairRequestPrivate(
    const EC2Request::Action action, CreateKeyPairRequest * const q)
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

} // namespace EC2
} // namespace QtAws
