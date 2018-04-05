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

#include "updatecertificateauthorityrequest.h"
#include "updatecertificateauthorityrequest_p.h"
#include "updatecertificateauthorityresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  UpdateCertificateAuthorityRequest
 *
 * @brief  Implements ACMPCA UpdateCertificateAuthority requests.
 *
 * @see    ACMPCAClient::updateCertificateAuthority
 */

/**
 * @brief  Constructs a new UpdateCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCertificateAuthorityRequest::UpdateCertificateAuthorityRequest(const UpdateCertificateAuthorityRequest &other)
    : ACMPCARequest(new UpdateCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCertificateAuthorityRequest object.
 */
UpdateCertificateAuthorityRequest::UpdateCertificateAuthorityRequest()
    : ACMPCARequest(new UpdateCertificateAuthorityRequestPrivate(ACMPCARequest::UpdateCertificateAuthorityAction, this))
{

}

bool UpdateCertificateAuthorityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCertificateAuthorityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCertificateAuthorityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for UpdateCertificateAuthorityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateAuthorityRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public UpdateCertificateAuthorityRequest instance.
 */
UpdateCertificateAuthorityRequestPrivate::UpdateCertificateAuthorityRequestPrivate(
    const ACMPCARequest::Action action, UpdateCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCertificateAuthorityRequest instance.
 */
UpdateCertificateAuthorityRequestPrivate::UpdateCertificateAuthorityRequestPrivate(
    const UpdateCertificateAuthorityRequestPrivate &other, UpdateCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
