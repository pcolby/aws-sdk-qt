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

#include "listcertificateauthoritiesrequest.h"
#include "listcertificateauthoritiesrequest_p.h"
#include "listcertificateauthoritiesresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  ListCertificateAuthoritiesRequest
 *
 * @brief  Implements ACMPCA ListCertificateAuthorities requests.
 *
 * @see    ACMPCAClient::listCertificateAuthorities
 */

/**
 * @brief  Constructs a new ListCertificateAuthoritiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCertificateAuthoritiesRequest::ListCertificateAuthoritiesRequest(const ListCertificateAuthoritiesRequest &other)
    : ACMPCARequest(new ListCertificateAuthoritiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCertificateAuthoritiesRequest object.
 */
ListCertificateAuthoritiesRequest::ListCertificateAuthoritiesRequest()
    : ACMPCARequest(new ListCertificateAuthoritiesRequestPrivate(ACMPCARequest::ListCertificateAuthoritiesAction, this))
{

}

bool ListCertificateAuthoritiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCertificateAuthoritiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCertificateAuthoritiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCertificateAuthoritiesRequest::response(QNetworkReply * const reply) const
{
    return new ListCertificateAuthoritiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCertificateAuthoritiesRequestPrivate
 *
 * @brief  Private implementation for ListCertificateAuthoritiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificateAuthoritiesRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public ListCertificateAuthoritiesRequest instance.
 */
ListCertificateAuthoritiesRequestPrivate::ListCertificateAuthoritiesRequestPrivate(
    const ACMPCARequest::Action action, ListCertificateAuthoritiesRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificateAuthoritiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCertificateAuthoritiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCertificateAuthoritiesRequest instance.
 */
ListCertificateAuthoritiesRequestPrivate::ListCertificateAuthoritiesRequestPrivate(
    const ListCertificateAuthoritiesRequestPrivate &other, ListCertificateAuthoritiesRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
