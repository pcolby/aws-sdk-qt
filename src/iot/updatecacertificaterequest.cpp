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

#include "updatecacertificaterequest.h"
#include "updatecacertificaterequest_p.h"
#include "updatecacertificateresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateCACertificateRequest
 *
 * @brief  Implements IoT UpdateCACertificate requests.
 *
 * @see    IoTClient::updateCACertificate
 */

/**
 * @brief  Constructs a new UpdateCACertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCACertificateRequest::UpdateCACertificateRequest(const UpdateCACertificateRequest &other)
    : IoTRequest(new UpdateCACertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCACertificateRequest object.
 */
UpdateCACertificateRequest::UpdateCACertificateRequest()
    : IoTRequest(new UpdateCACertificateRequestPrivate(IoTRequest::UpdateCACertificateAction, this))
{

}

bool UpdateCACertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCACertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCACertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateCACertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCACertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCACertificateRequestPrivate
 *
 * @brief  Private implementation for UpdateCACertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCACertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateCACertificateRequest instance.
 */
UpdateCACertificateRequestPrivate::UpdateCACertificateRequestPrivate(
    const IoTRequest::Action action, UpdateCACertificateRequest * const q)
    : UpdateCACertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCACertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCACertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCACertificateRequest instance.
 */
UpdateCACertificateRequestPrivate::UpdateCACertificateRequestPrivate(
    const UpdateCACertificateRequestPrivate &other, UpdateCACertificateRequest * const q)
    : UpdateCACertificatePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
