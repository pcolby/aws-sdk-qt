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

#include "generatedatakeywithoutplaintextrequest.h"
#include "generatedatakeywithoutplaintextrequest_p.h"
#include "generatedatakeywithoutplaintextresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  GenerateDataKeyWithoutPlaintextRequest
 *
 * @brief  Implements KMS GenerateDataKeyWithoutPlaintext requests.
 *
 * @see    KMSClient::generateDataKeyWithoutPlaintext
 */

/**
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GenerateDataKeyWithoutPlaintextRequest::GenerateDataKeyWithoutPlaintextRequest(const GenerateDataKeyWithoutPlaintextRequest &other)
    : KMSRequest(new GenerateDataKeyWithoutPlaintextRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextRequest object.
 */
GenerateDataKeyWithoutPlaintextRequest::GenerateDataKeyWithoutPlaintextRequest()
    : KMSRequest(new GenerateDataKeyWithoutPlaintextRequestPrivate(KMSRequest::GenerateDataKeyWithoutPlaintextAction, this))
{

}

bool GenerateDataKeyWithoutPlaintextRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GenerateDataKeyWithoutPlaintextResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GenerateDataKeyWithoutPlaintextResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateDataKeyWithoutPlaintextRequest::response(QNetworkReply * const reply) const
{
    return new GenerateDataKeyWithoutPlaintextResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GenerateDataKeyWithoutPlaintextRequestPrivate
 *
 * @brief  Private implementation for GenerateDataKeyWithoutPlaintextRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public GenerateDataKeyWithoutPlaintextRequest instance.
 */
GenerateDataKeyWithoutPlaintextRequestPrivate::GenerateDataKeyWithoutPlaintextRequestPrivate(
    const KMSRequest::Action action, GenerateDataKeyWithoutPlaintextRequest * const q)
    : GenerateDataKeyWithoutPlaintextPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GenerateDataKeyWithoutPlaintextRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GenerateDataKeyWithoutPlaintextRequest instance.
 */
GenerateDataKeyWithoutPlaintextRequestPrivate::GenerateDataKeyWithoutPlaintextRequestPrivate(
    const GenerateDataKeyWithoutPlaintextRequestPrivate &other, GenerateDataKeyWithoutPlaintextRequest * const q)
    : GenerateDataKeyWithoutPlaintextPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
