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

#include "removetagsfromcertificaterequest.h"
#include "removetagsfromcertificaterequest_p.h"
#include "removetagsfromcertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/**
 * @class  RemoveTagsFromCertificateRequest
 *
 * @brief  Implements ACM RemoveTagsFromCertificate requests.
 *
 * @see    ACMClient::removeTagsFromCertificate
 */

/**
 * @brief  Constructs a new RemoveTagsFromCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromCertificateRequest::RemoveTagsFromCertificateRequest(const RemoveTagsFromCertificateRequest &other)
    : ACMRequest(new RemoveTagsFromCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromCertificateRequest object.
 */
RemoveTagsFromCertificateRequest::RemoveTagsFromCertificateRequest()
    : ACMRequest(new RemoveTagsFromCertificateRequestPrivate(ACMRequest::RemoveTagsFromCertificateAction, this))
{

}

bool RemoveTagsFromCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromCertificateRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromCertificateRequest instance.
 */
RemoveTagsFromCertificateRequestPrivate::RemoveTagsFromCertificateRequestPrivate(
    const ACMRequest::Action action, RemoveTagsFromCertificateRequest * const q)
    : ACMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromCertificateRequest instance.
 */
RemoveTagsFromCertificateRequestPrivate::RemoveTagsFromCertificateRequestPrivate(
    const RemoveTagsFromCertificateRequestPrivate &other, RemoveTagsFromCertificateRequest * const q)
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
