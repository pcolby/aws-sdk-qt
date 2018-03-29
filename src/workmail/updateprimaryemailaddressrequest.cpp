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

#include "updateprimaryemailaddressrequest.h"
#include "updateprimaryemailaddressrequest_p.h"
#include "updateprimaryemailaddressresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  UpdatePrimaryEmailAddressRequest
 *
 * @brief  Implements WorkMail UpdatePrimaryEmailAddress requests.
 *
 * @see    WorkMailClient::updatePrimaryEmailAddress
 */

/**
 * @brief  Constructs a new UpdatePrimaryEmailAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePrimaryEmailAddressRequest::UpdatePrimaryEmailAddressRequest(const UpdatePrimaryEmailAddressRequest &other)
    : WorkMailRequest(new UpdatePrimaryEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePrimaryEmailAddressRequest object.
 */
UpdatePrimaryEmailAddressRequest::UpdatePrimaryEmailAddressRequest()
    : WorkMailRequest(new UpdatePrimaryEmailAddressRequestPrivate(WorkMailRequest::UpdatePrimaryEmailAddressAction, this))
{

}

bool UpdatePrimaryEmailAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePrimaryEmailAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePrimaryEmailAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * UpdatePrimaryEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePrimaryEmailAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePrimaryEmailAddressRequestPrivate
 *
 * @brief  Private implementation for UpdatePrimaryEmailAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePrimaryEmailAddressRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public UpdatePrimaryEmailAddressRequest instance.
 */
UpdatePrimaryEmailAddressRequestPrivate::UpdatePrimaryEmailAddressRequestPrivate(
    const WorkMailRequest::Action action, UpdatePrimaryEmailAddressRequest * const q)
    : UpdatePrimaryEmailAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePrimaryEmailAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePrimaryEmailAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePrimaryEmailAddressRequest instance.
 */
UpdatePrimaryEmailAddressRequestPrivate::UpdatePrimaryEmailAddressRequestPrivate(
    const UpdatePrimaryEmailAddressRequestPrivate &other, UpdatePrimaryEmailAddressRequest * const q)
    : UpdatePrimaryEmailAddressPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
