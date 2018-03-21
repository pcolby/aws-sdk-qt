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

#include "generaterandomrequest.h"
#include "generaterandomrequest_p.h"
#include "generaterandomresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  GenerateRandomRequest
 *
 * @brief  Implements KMS GenerateRandom requests.
 *
 * @see    KMSClient::generateRandom
 */

/**
 * @brief  Constructs a new GenerateRandomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GenerateRandomRequest::GenerateRandomRequest(const GenerateRandomRequest &other)
    : KMSRequest(new GenerateRandomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GenerateRandomRequest object.
 */
GenerateRandomRequest::GenerateRandomRequest()
    : KMSRequest(new GenerateRandomRequestPrivate(KMSRequest::GenerateRandomAction, this))
{

}

bool GenerateRandomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GenerateRandomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GenerateRandomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * GenerateRandomRequest::response(QNetworkReply * const reply) const
{
    return new GenerateRandomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GenerateRandomRequestPrivate
 *
 * @brief  Private implementation for GenerateRandomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateRandomRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public GenerateRandomRequest instance.
 */
GenerateRandomRequestPrivate::GenerateRandomRequestPrivate(
    const KMSRequest::Action action, GenerateRandomRequest * const q)
    : GenerateRandomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GenerateRandomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GenerateRandomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GenerateRandomRequest instance.
 */
GenerateRandomRequestPrivate::GenerateRandomRequestPrivate(
    const GenerateRandomRequestPrivate &other, GenerateRandomRequest * const q)
    : GenerateRandomPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
