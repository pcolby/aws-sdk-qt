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

#include "updatecertificateoptionsrequest.h"
#include "updatecertificateoptionsrequest_p.h"
#include "updatecertificateoptionsresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  UpdateCertificateOptionsRequest
 *
 * @brief  Implements ACM UpdateCertificateOptions requests.
 *
 * @see    ACMClient::updateCertificateOptions
 */

/**
 * @brief  Constructs a new UpdateCertificateOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCertificateOptionsRequest::UpdateCertificateOptionsRequest(const UpdateCertificateOptionsRequest &other)
    : ACMRequest(new UpdateCertificateOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCertificateOptionsRequest object.
 */
UpdateCertificateOptionsRequest::UpdateCertificateOptionsRequest()
    : ACMRequest(new UpdateCertificateOptionsRequestPrivate(ACMRequest::UpdateCertificateOptionsAction, this))
{

}

bool UpdateCertificateOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCertificateOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCertificateOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * UpdateCertificateOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCertificateOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCertificateOptionsRequestPrivate
 *
 * @brief  Private implementation for UpdateCertificateOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateOptionsRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public UpdateCertificateOptionsRequest instance.
 */
UpdateCertificateOptionsRequestPrivate::UpdateCertificateOptionsRequestPrivate(
    const ACMRequest::Action action, UpdateCertificateOptionsRequest * const q)
    : UpdateCertificateOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCertificateOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCertificateOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCertificateOptionsRequest instance.
 */
UpdateCertificateOptionsRequestPrivate::UpdateCertificateOptionsRequestPrivate(
    const UpdateCertificateOptionsRequestPrivate &other, UpdateCertificateOptionsRequest * const q)
    : UpdateCertificateOptionsPrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS
