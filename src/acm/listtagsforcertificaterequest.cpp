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

#include "listtagsforcertificaterequest.h"
#include "listtagsforcertificaterequest_p.h"
#include "listtagsforcertificateresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  ListTagsForCertificateRequest
 *
 * @brief  Implements ACM ListTagsForCertificate requests.
 *
 * @see    ACMClient::listTagsForCertificate
 */

/**
 * @brief  Constructs a new ListTagsForCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForCertificateRequest::ListTagsForCertificateRequest(const ListTagsForCertificateRequest &other)
    : ACMRequest(new ListTagsForCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForCertificateRequest object.
 */
ListTagsForCertificateRequest::ListTagsForCertificateRequest()
    : ACMRequest(new ListTagsForCertificateRequestPrivate(ACMRequest::ListTagsForCertificateAction, this))
{

}

bool ListTagsForCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * ListTagsForCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForCertificateRequestPrivate
 *
 * @brief  Private implementation for ListTagsForCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public ListTagsForCertificateRequest instance.
 */
ListTagsForCertificateRequestPrivate::ListTagsForCertificateRequestPrivate(
    const ACMRequest::Action action, ListTagsForCertificateRequest * const q)
    : ListTagsForCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForCertificateRequest instance.
 */
ListTagsForCertificateRequestPrivate::ListTagsForCertificateRequestPrivate(
    const ListTagsForCertificateRequestPrivate &other, ListTagsForCertificateRequest * const q)
    : ListTagsForCertificatePrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS
