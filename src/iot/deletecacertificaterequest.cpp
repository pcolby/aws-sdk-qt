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

#include "deletecacertificaterequest.h"
#include "deletecacertificaterequest_p.h"
#include "deletecacertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteCACertificateRequest
 *
 * @brief  Implements IoT DeleteCACertificate requests.
 *
 * @see    IoTClient::deleteCACertificate
 */

/**
 * @brief  Constructs a new DeleteCACertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCACertificateRequest::DeleteCACertificateRequest(const DeleteCACertificateRequest &other)
    : IoTRequest(new DeleteCACertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCACertificateRequest object.
 */
DeleteCACertificateRequest::DeleteCACertificateRequest()
    : IoTRequest(new DeleteCACertificateRequestPrivate(IoTRequest::DeleteCACertificateAction, this))
{

}

bool DeleteCACertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCACertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCACertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteCACertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCACertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCACertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteCACertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCACertificateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteCACertificateRequest instance.
 */
DeleteCACertificateRequestPrivate::DeleteCACertificateRequestPrivate(
    const IoTRequest::Action action, DeleteCACertificateRequest * const q)
    : DeleteCACertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCACertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCACertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCACertificateRequest instance.
 */
DeleteCACertificateRequestPrivate::DeleteCACertificateRequestPrivate(
    const DeleteCACertificateRequestPrivate &other, DeleteCACertificateRequest * const q)
    : DeleteCACertificatePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
