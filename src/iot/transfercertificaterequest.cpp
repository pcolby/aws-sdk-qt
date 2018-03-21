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

#include "transfercertificaterequest.h"
#include "transfercertificaterequest_p.h"
#include "transfercertificateresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  TransferCertificateRequest
 *
 * @brief  Implements IoT TransferCertificate requests.
 *
 * @see    IoTClient::transferCertificate
 */

/**
 * @brief  Constructs a new TransferCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TransferCertificateResponse::TransferCertificateResponse(

/**
 * @brief  Constructs a new TransferCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TransferCertificateRequest::TransferCertificateRequest(const TransferCertificateRequest &other)
    : IoTRequest(new TransferCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TransferCertificateRequest object.
 */
TransferCertificateRequest::TransferCertificateRequest()
    : IoTRequest(new TransferCertificateRequestPrivate(IoTRequest::TransferCertificateAction, this))
{

}

bool TransferCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TransferCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TransferCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * TransferCertificateRequest::response(QNetworkReply * const reply) const
{
    return new TransferCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TransferCertificateRequestPrivate
 *
 * @brief  Private implementation for TransferCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TransferCertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public TransferCertificateRequest instance.
 */
TransferCertificateRequestPrivate::TransferCertificateRequestPrivate(
    const IoTRequest::Action action, TransferCertificateRequest * const q)
    : TransferCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TransferCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TransferCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TransferCertificateRequest instance.
 */
TransferCertificateRequestPrivate::TransferCertificateRequestPrivate(
    const TransferCertificateRequestPrivate &other, TransferCertificateRequest * const q)
    : TransferCertificatePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
