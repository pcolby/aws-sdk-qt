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

#include "registercacertificaterequest.h"
#include "registercacertificaterequest_p.h"
#include "registercacertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  RegisterCACertificateRequest
 *
 * @brief  Implements IoT RegisterCACertificate requests.
 *
 * @see    IoTClient::registerCACertificate
 */

/**
 * @brief  Constructs a new RegisterCACertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterCACertificateRequest::RegisterCACertificateRequest(const RegisterCACertificateRequest &other)
    : IoTRequest(new RegisterCACertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterCACertificateRequest object.
 */
RegisterCACertificateRequest::RegisterCACertificateRequest()
    : IoTRequest(new RegisterCACertificateRequestPrivate(IoTRequest::RegisterCACertificateAction, this))
{

}

bool RegisterCACertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterCACertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterCACertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterCACertificateRequest::response(QNetworkReply * const reply) const
{
    return new RegisterCACertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterCACertificateRequestPrivate
 *
 * @brief  Private implementation for RegisterCACertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCACertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public RegisterCACertificateRequest instance.
 */
RegisterCACertificateRequestPrivate::RegisterCACertificateRequestPrivate(
    const IoTRequest::Action action, RegisterCACertificateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCACertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterCACertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterCACertificateRequest instance.
 */
RegisterCACertificateRequestPrivate::RegisterCACertificateRequestPrivate(
    const RegisterCACertificateRequestPrivate &other, RegisterCACertificateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
