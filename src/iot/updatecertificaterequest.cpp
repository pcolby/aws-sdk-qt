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

#include "updatecertificaterequest.h"
#include "updatecertificaterequest_p.h"
#include "updatecertificateresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateCertificateRequest
 *
 * @brief  Implements IoT UpdateCertificate requests.
 *
 * @see    IoTClient::updateCertificate
 */

/**
 * @brief  Constructs a new UpdateCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCertificateResponse::UpdateCertificateResponse(

/**
 * @brief  Constructs a new UpdateCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCertificateRequest::UpdateCertificateRequest(const UpdateCertificateRequest &other)
    : IoTRequest(new UpdateCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCertificateRequest object.
 */
UpdateCertificateRequest::UpdateCertificateRequest()
    : IoTRequest(new UpdateCertificateRequestPrivate(IoTRequest::UpdateCertificateAction, this))
{

}

bool UpdateCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCertificateRequestPrivate
 *
 * @brief  Private implementation for UpdateCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateCertificateRequest instance.
 */
UpdateCertificateRequestPrivate::UpdateCertificateRequestPrivate(
    const IoTRequest::Action action, UpdateCertificateRequest * const q)
    : UpdateCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCertificateRequest instance.
 */
UpdateCertificateRequestPrivate::UpdateCertificateRequestPrivate(
    const UpdateCertificateRequestPrivate &other, UpdateCertificateRequest * const q)
    : UpdateCertificatePrivate(other, q)
{

}
