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

#include "deletehsmclientcertificaterequest.h"
#include "deletehsmclientcertificaterequest_p.h"
#include "deletehsmclientcertificateresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteHsmClientCertificateRequest
 *
 * @brief  Implements Redshift DeleteHsmClientCertificate requests.
 *
 * @see    RedshiftClient::deleteHsmClientCertificate
 */

/**
 * @brief  Constructs a new DeleteHsmClientCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHsmClientCertificateRequest::DeleteHsmClientCertificateRequest(const DeleteHsmClientCertificateRequest &other)
    : RedshiftRequest(new DeleteHsmClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHsmClientCertificateRequest object.
 */
DeleteHsmClientCertificateRequest::DeleteHsmClientCertificateRequest()
    : RedshiftRequest(new DeleteHsmClientCertificateRequestPrivate(RedshiftRequest::DeleteHsmClientCertificateAction, this))
{

}

bool DeleteHsmClientCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHsmClientCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHsmClientCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHsmClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmClientCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHsmClientCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteHsmClientCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmClientCertificateRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteHsmClientCertificateRequest instance.
 */
DeleteHsmClientCertificateRequestPrivate::DeleteHsmClientCertificateRequestPrivate(
    const RedshiftRequest::Action action, DeleteHsmClientCertificateRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmClientCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmClientCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHsmClientCertificateRequest instance.
 */
DeleteHsmClientCertificateRequestPrivate::DeleteHsmClientCertificateRequestPrivate(
    const DeleteHsmClientCertificateRequestPrivate &other, DeleteHsmClientCertificateRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
