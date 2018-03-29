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

#include "registercertificaterequest.h"
#include "registercertificaterequest_p.h"
#include "registercertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  RegisterCertificateRequest
 *
 * @brief  Implements IoT RegisterCertificate requests.
 *
 * @see    IoTClient::registerCertificate
 */

/**
 * @brief  Constructs a new RegisterCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterCertificateRequest::RegisterCertificateRequest(const RegisterCertificateRequest &other)
    : IoTRequest(new RegisterCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterCertificateRequest object.
 */
RegisterCertificateRequest::RegisterCertificateRequest()
    : IoTRequest(new RegisterCertificateRequestPrivate(IoTRequest::RegisterCertificateAction, this))
{

}

bool RegisterCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * RegisterCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RegisterCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterCertificateRequestPrivate
 *
 * @brief  Private implementation for RegisterCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public RegisterCertificateRequest instance.
 */
RegisterCertificateRequestPrivate::RegisterCertificateRequestPrivate(
    const IoTRequest::Action action, RegisterCertificateRequest * const q)
    : RegisterCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterCertificateRequest instance.
 */
RegisterCertificateRequestPrivate::RegisterCertificateRequestPrivate(
    const RegisterCertificateRequestPrivate &other, RegisterCertificateRequest * const q)
    : RegisterCertificatePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
