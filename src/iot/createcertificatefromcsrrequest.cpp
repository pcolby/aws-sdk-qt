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

#include "createcertificatefromcsrrequest.h"
#include "createcertificatefromcsrrequest_p.h"
#include "createcertificatefromcsrresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  CreateCertificateFromCsrRequest
 *
 * @brief  Implements IoT CreateCertificateFromCsr requests.
 *
 * @see    IoTClient::createCertificateFromCsr
 */

/**
 * @brief  Constructs a new CreateCertificateFromCsrRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCertificateFromCsrRequest::CreateCertificateFromCsrRequest(const CreateCertificateFromCsrRequest &other)
    : IoTRequest(new CreateCertificateFromCsrRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCertificateFromCsrRequest object.
 */
CreateCertificateFromCsrRequest::CreateCertificateFromCsrRequest()
    : IoTRequest(new CreateCertificateFromCsrRequestPrivate(IoTRequest::CreateCertificateFromCsrAction, this))
{

}

bool CreateCertificateFromCsrRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCertificateFromCsrResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCertificateFromCsrResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateCertificateFromCsrRequest::response(QNetworkReply * const reply) const
{
    return new CreateCertificateFromCsrResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCertificateFromCsrRequestPrivate
 *
 * @brief  Private implementation for CreateCertificateFromCsrRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateFromCsrRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateCertificateFromCsrRequest instance.
 */
CreateCertificateFromCsrRequestPrivate::CreateCertificateFromCsrRequestPrivate(
    const IoTRequest::Action action, CreateCertificateFromCsrRequest * const q)
    : CreateCertificateFromCsrPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateFromCsrRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCertificateFromCsrRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCertificateFromCsrRequest instance.
 */
CreateCertificateFromCsrRequestPrivate::CreateCertificateFromCsrRequestPrivate(
    const CreateCertificateFromCsrRequestPrivate &other, CreateCertificateFromCsrRequest * const q)
    : CreateCertificateFromCsrPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
