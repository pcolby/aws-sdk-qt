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

#include "createkeysandcertificaterequest.h"
#include "createkeysandcertificaterequest_p.h"
#include "createkeysandcertificateresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  CreateKeysAndCertificateRequest
 *
 * @brief  Implements IoT CreateKeysAndCertificate requests.
 *
 * @see    IoTClient::createKeysAndCertificate
 */

/**
 * @brief  Constructs a new CreateKeysAndCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeysAndCertificateResponse::CreateKeysAndCertificateResponse(

/**
 * @brief  Constructs a new CreateKeysAndCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateKeysAndCertificateRequest::CreateKeysAndCertificateRequest(const CreateKeysAndCertificateRequest &other)
    : IoTRequest(new CreateKeysAndCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateKeysAndCertificateRequest object.
 */
CreateKeysAndCertificateRequest::CreateKeysAndCertificateRequest()
    : IoTRequest(new CreateKeysAndCertificateRequestPrivate(IoTRequest::CreateKeysAndCertificateAction, this))
{

}

bool CreateKeysAndCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateKeysAndCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateKeysAndCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateKeysAndCertificateRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeysAndCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateKeysAndCertificateRequestPrivate
 *
 * @brief  Private implementation for CreateKeysAndCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeysAndCertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateKeysAndCertificateRequest instance.
 */
CreateKeysAndCertificateRequestPrivate::CreateKeysAndCertificateRequestPrivate(
    const IoTRequest::Action action, CreateKeysAndCertificateRequest * const q)
    : CreateKeysAndCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeysAndCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateKeysAndCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateKeysAndCertificateRequest instance.
 */
CreateKeysAndCertificateRequestPrivate::CreateKeysAndCertificateRequestPrivate(
    const CreateKeysAndCertificateRequestPrivate &other, CreateKeysAndCertificateRequest * const q)
    : CreateKeysAndCertificatePrivate(other, q)
{

}
