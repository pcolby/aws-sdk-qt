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

#include "verifyemailidentityrequest.h"
#include "verifyemailidentityrequest_p.h"
#include "verifyemailidentityresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  VerifyEmailIdentityRequest
 *
 * @brief  Implements SES VerifyEmailIdentity requests.
 *
 * @see    SESClient::verifyEmailIdentity
 */

/**
 * @brief  Constructs a new VerifyEmailIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest(const VerifyEmailIdentityRequest &other)
    : SESRequest(new VerifyEmailIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifyEmailIdentityRequest object.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest()
    : SESRequest(new VerifyEmailIdentityRequestPrivate(SESRequest::VerifyEmailIdentityAction, this))
{

}

bool VerifyEmailIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifyEmailIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyEmailIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * VerifyEmailIdentityRequest::response(QNetworkReply * const reply) const
{
    return new VerifyEmailIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifyEmailIdentityRequestPrivate
 *
 * @brief  Private implementation for VerifyEmailIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyEmailIdentityRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public VerifyEmailIdentityRequest instance.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const SESRequest::Action action, VerifyEmailIdentityRequest * const q)
    : VerifyEmailIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifyEmailIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyEmailIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyEmailIdentityRequest instance.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const VerifyEmailIdentityRequestPrivate &other, VerifyEmailIdentityRequest * const q)
    : VerifyEmailIdentityPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
