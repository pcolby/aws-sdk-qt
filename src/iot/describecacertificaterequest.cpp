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

#include "describecacertificaterequest.h"
#include "describecacertificaterequest_p.h"
#include "describecacertificateresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DescribeCACertificateRequest
 *
 * @brief  Implements IoT DescribeCACertificate requests.
 *
 * @see    IoTClient::describeCACertificate
 */

/**
 * @brief  Constructs a new DescribeCACertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCACertificateRequest::DescribeCACertificateRequest(const DescribeCACertificateRequest &other)
    : IoTRequest(new DescribeCACertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCACertificateRequest object.
 */
DescribeCACertificateRequest::DescribeCACertificateRequest()
    : IoTRequest(new DescribeCACertificateRequestPrivate(IoTRequest::DescribeCACertificateAction, this))
{

}

bool DescribeCACertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCACertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCACertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeCACertificateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCACertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCACertificateRequestPrivate
 *
 * @brief  Private implementation for DescribeCACertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCACertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeCACertificateRequest instance.
 */
DescribeCACertificateRequestPrivate::DescribeCACertificateRequestPrivate(
    const IoTRequest::Action action, DescribeCACertificateRequest * const q)
    : DescribeCACertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCACertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCACertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCACertificateRequest instance.
 */
DescribeCACertificateRequestPrivate::DescribeCACertificateRequestPrivate(
    const DescribeCACertificateRequestPrivate &other, DescribeCACertificateRequest * const q)
    : DescribeCACertificatePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
