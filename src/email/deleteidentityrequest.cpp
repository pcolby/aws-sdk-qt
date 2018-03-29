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

#include "deleteidentityrequest.h"
#include "deleteidentityrequest_p.h"
#include "deleteidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteIdentityRequest
 *
 * @brief  Implements SES DeleteIdentity requests.
 *
 * @see    SESClient::deleteIdentity
 */

/**
 * @brief  Constructs a new DeleteIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentityRequest::DeleteIdentityRequest(const DeleteIdentityRequest &other)
    : SESRequest(new DeleteIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIdentityRequest object.
 */
DeleteIdentityRequest::DeleteIdentityRequest()
    : SESRequest(new DeleteIdentityRequestPrivate(SESRequest::DeleteIdentityAction, this))
{

}

bool DeleteIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIdentityRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteIdentityRequest instance.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const SESRequest::Action action, DeleteIdentityRequest * const q)
    : DeleteIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentityRequest instance.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const DeleteIdentityRequestPrivate &other, DeleteIdentityRequest * const q)
    : DeleteIdentityPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
