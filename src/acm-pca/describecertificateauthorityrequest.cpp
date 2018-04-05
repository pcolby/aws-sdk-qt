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

#include "describecertificateauthorityrequest.h"
#include "describecertificateauthorityrequest_p.h"
#include "describecertificateauthorityresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  DescribeCertificateAuthorityRequest
 *
 * @brief  Implements ACMPCA DescribeCertificateAuthority requests.
 *
 * @see    ACMPCAClient::describeCertificateAuthority
 */

/**
 * @brief  Constructs a new DescribeCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCertificateAuthorityRequest::DescribeCertificateAuthorityRequest(const DescribeCertificateAuthorityRequest &other)
    : ACMPCARequest(new DescribeCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCertificateAuthorityRequest object.
 */
DescribeCertificateAuthorityRequest::DescribeCertificateAuthorityRequest()
    : ACMPCARequest(new DescribeCertificateAuthorityRequestPrivate(ACMPCARequest::DescribeCertificateAuthorityAction, this))
{

}

bool DescribeCertificateAuthorityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCertificateAuthorityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificateAuthorityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for DescribeCertificateAuthorityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public DescribeCertificateAuthorityRequest instance.
 */
DescribeCertificateAuthorityRequestPrivate::DescribeCertificateAuthorityRequestPrivate(
    const ACMPCARequest::Action action, DescribeCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCertificateAuthorityRequest instance.
 */
DescribeCertificateAuthorityRequestPrivate::DescribeCertificateAuthorityRequestPrivate(
    const DescribeCertificateAuthorityRequestPrivate &other, DescribeCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
