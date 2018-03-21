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

#include "deleteverifiedemailaddressrequest.h"
#include "deleteverifiedemailaddressrequest_p.h"
#include "deleteverifiedemailaddressresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  DeleteVerifiedEmailAddressRequest
 *
 * @brief  Implements SES DeleteVerifiedEmailAddress requests.
 *
 * @see    SESClient::deleteVerifiedEmailAddress
 */

/**
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest(const DeleteVerifiedEmailAddressRequest &other)
    : SESRequest(new DeleteVerifiedEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequest object.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest()
    : SESRequest(new DeleteVerifiedEmailAddressRequestPrivate(SESRequest::DeleteVerifiedEmailAddressAction, this))
{

}

bool DeleteVerifiedEmailAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVerifiedEmailAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVerifiedEmailAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteVerifiedEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVerifiedEmailAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVerifiedEmailAddressRequestPrivate
 *
 * @brief  Private implementation for DeleteVerifiedEmailAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteVerifiedEmailAddressRequest instance.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const SESRequest::Action action, DeleteVerifiedEmailAddressRequest * const q)
    : DeleteVerifiedEmailAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVerifiedEmailAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVerifiedEmailAddressRequest instance.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const DeleteVerifiedEmailAddressRequestPrivate &other, DeleteVerifiedEmailAddressRequest * const q)
    : DeleteVerifiedEmailAddressPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
