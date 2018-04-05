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

#include "createcertificateauthorityrequest.h"
#include "createcertificateauthorityrequest_p.h"
#include "createcertificateauthorityresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  CreateCertificateAuthorityRequest
 *
 * @brief  Implements ACMPCA CreateCertificateAuthority requests.
 *
 * @see    ACMPCAClient::createCertificateAuthority
 */

/**
 * @brief  Constructs a new CreateCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCertificateAuthorityRequest::CreateCertificateAuthorityRequest(const CreateCertificateAuthorityRequest &other)
    : ACMPCARequest(new CreateCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCertificateAuthorityRequest object.
 */
CreateCertificateAuthorityRequest::CreateCertificateAuthorityRequest()
    : ACMPCARequest(new CreateCertificateAuthorityRequestPrivate(ACMPCARequest::CreateCertificateAuthorityAction, this))
{

}

bool CreateCertificateAuthorityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCertificateAuthorityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new CreateCertificateAuthorityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for CreateCertificateAuthorityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public CreateCertificateAuthorityRequest instance.
 */
CreateCertificateAuthorityRequestPrivate::CreateCertificateAuthorityRequestPrivate(
    const ACMPCARequest::Action action, CreateCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCertificateAuthorityRequest instance.
 */
CreateCertificateAuthorityRequestPrivate::CreateCertificateAuthorityRequestPrivate(
    const CreateCertificateAuthorityRequestPrivate &other, CreateCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
