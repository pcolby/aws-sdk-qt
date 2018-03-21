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

#include "createhsmclientcertificaterequest.h"
#include "createhsmclientcertificaterequest_p.h"
#include "createhsmclientcertificateresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateHsmClientCertificateRequest
 *
 * @brief  Implements Redshift CreateHsmClientCertificate requests.
 *
 * @see    RedshiftClient::createHsmClientCertificate
 */

/**
 * @brief  Constructs a new CreateHsmClientCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHsmClientCertificateRequest::CreateHsmClientCertificateRequest(const CreateHsmClientCertificateRequest &other)
    : RedshiftRequest(new CreateHsmClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHsmClientCertificateRequest object.
 */
CreateHsmClientCertificateRequest::CreateHsmClientCertificateRequest()
    : RedshiftRequest(new CreateHsmClientCertificateRequestPrivate(RedshiftRequest::CreateHsmClientCertificateAction, this))
{

}

bool CreateHsmClientCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHsmClientCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHsmClientCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateHsmClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new CreateHsmClientCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHsmClientCertificateRequestPrivate
 *
 * @brief  Private implementation for CreateHsmClientCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmClientCertificateRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateHsmClientCertificateRequest instance.
 */
CreateHsmClientCertificateRequestPrivate::CreateHsmClientCertificateRequestPrivate(
    const RedshiftRequest::Action action, CreateHsmClientCertificateRequest * const q)
    : CreateHsmClientCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmClientCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHsmClientCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHsmClientCertificateRequest instance.
 */
CreateHsmClientCertificateRequestPrivate::CreateHsmClientCertificateRequestPrivate(
    const CreateHsmClientCertificateRequestPrivate &other, CreateHsmClientCertificateRequest * const q)
    : CreateHsmClientCertificatePrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
