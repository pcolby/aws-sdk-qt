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

#include "updateservercertificaterequest.h"
#include "updateservercertificaterequest_p.h"
#include "updateservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateServerCertificateRequest
 *
 * @brief  Implements IAM UpdateServerCertificate requests.
 *
 * @see    IAMClient::updateServerCertificate
 */

/**
 * @brief  Constructs a new UpdateServerCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServerCertificateRequest::UpdateServerCertificateRequest(const UpdateServerCertificateRequest &other)
    : IAMRequest(new UpdateServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServerCertificateRequest object.
 */
UpdateServerCertificateRequest::UpdateServerCertificateRequest()
    : IAMRequest(new UpdateServerCertificateRequestPrivate(IAMRequest::UpdateServerCertificateAction, this))
{

}

bool UpdateServerCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServerCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServerCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServerCertificateRequestPrivate
 *
 * @brief  Private implementation for UpdateServerCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateServerCertificateRequest instance.
 */
UpdateServerCertificateRequestPrivate::UpdateServerCertificateRequestPrivate(
    const IAMRequest::Action action, UpdateServerCertificateRequest * const q)
    : UpdateServerCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServerCertificateRequest instance.
 */
UpdateServerCertificateRequestPrivate::UpdateServerCertificateRequestPrivate(
    const UpdateServerCertificateRequestPrivate &other, UpdateServerCertificateRequest * const q)
    : UpdateServerCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
