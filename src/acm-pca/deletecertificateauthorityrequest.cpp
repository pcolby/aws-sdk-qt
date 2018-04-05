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

#include "deletecertificateauthorityrequest.h"
#include "deletecertificateauthorityrequest_p.h"
#include "deletecertificateauthorityresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DeleteCertificateAuthorityRequest
 *
 * @brief  Implements ACMPCA DeleteCertificateAuthority requests.
 *
 * @see    ACMPCAClient::deleteCertificateAuthority
 */

/**
 * @brief  Constructs a new DeleteCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCertificateAuthorityRequest::DeleteCertificateAuthorityRequest(const DeleteCertificateAuthorityRequest &other)
    : ACMPCARequest(new DeleteCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCertificateAuthorityRequest object.
 */
DeleteCertificateAuthorityRequest::DeleteCertificateAuthorityRequest()
    : ACMPCARequest(new DeleteCertificateAuthorityRequestPrivate(ACMPCARequest::DeleteCertificateAuthorityAction, this))
{

}

bool DeleteCertificateAuthorityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCertificateAuthorityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCertificateAuthorityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for DeleteCertificateAuthorityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateAuthorityRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public DeleteCertificateAuthorityRequest instance.
 */
DeleteCertificateAuthorityRequestPrivate::DeleteCertificateAuthorityRequestPrivate(
    const ACMPCARequest::Action action, DeleteCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCertificateAuthorityRequest instance.
 */
DeleteCertificateAuthorityRequestPrivate::DeleteCertificateAuthorityRequestPrivate(
    const DeleteCertificateAuthorityRequestPrivate &other, DeleteCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
