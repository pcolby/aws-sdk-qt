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

#include "deletesigningcertificaterequest.h"
#include "deletesigningcertificaterequest_p.h"
#include "deletesigningcertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteSigningCertificateRequest
 *
 * @brief  Implements IAM DeleteSigningCertificate requests.
 *
 * @see    IAMClient::deleteSigningCertificate
 */

/**
 * @brief  Constructs a new DeleteSigningCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSigningCertificateRequest::DeleteSigningCertificateRequest(const DeleteSigningCertificateRequest &other)
    : IAMRequest(new DeleteSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSigningCertificateRequest object.
 */
DeleteSigningCertificateRequest::DeleteSigningCertificateRequest()
    : IAMRequest(new DeleteSigningCertificateRequestPrivate(IAMRequest::DeleteSigningCertificateAction, this))
{

}

bool DeleteSigningCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSigningCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSigningCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSigningCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSigningCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteSigningCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSigningCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteSigningCertificateRequest instance.
 */
DeleteSigningCertificateRequestPrivate::DeleteSigningCertificateRequestPrivate(
    const IAMRequest::Action action, DeleteSigningCertificateRequest * const q)
    : DeleteSigningCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSigningCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSigningCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSigningCertificateRequest instance.
 */
DeleteSigningCertificateRequestPrivate::DeleteSigningCertificateRequestPrivate(
    const DeleteSigningCertificateRequestPrivate &other, DeleteSigningCertificateRequest * const q)
    : DeleteSigningCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
