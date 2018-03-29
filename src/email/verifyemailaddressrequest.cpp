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

#include "verifyemailaddressrequest.h"
#include "verifyemailaddressrequest_p.h"
#include "verifyemailaddressresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  VerifyEmailAddressRequest
 *
 * @brief  Implements SES VerifyEmailAddress requests.
 *
 * @see    SESClient::verifyEmailAddress
 */

/**
 * @brief  Constructs a new VerifyEmailAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyEmailAddressRequest::VerifyEmailAddressRequest(const VerifyEmailAddressRequest &other)
    : SESRequest(new VerifyEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifyEmailAddressRequest object.
 */
VerifyEmailAddressRequest::VerifyEmailAddressRequest()
    : SESRequest(new VerifyEmailAddressRequestPrivate(SESRequest::VerifyEmailAddressAction, this))
{

}

bool VerifyEmailAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifyEmailAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyEmailAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * VerifyEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new VerifyEmailAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifyEmailAddressRequestPrivate
 *
 * @brief  Private implementation for VerifyEmailAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyEmailAddressRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public VerifyEmailAddressRequest instance.
 */
VerifyEmailAddressRequestPrivate::VerifyEmailAddressRequestPrivate(
    const SESRequest::Action action, VerifyEmailAddressRequest * const q)
    : VerifyEmailAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifyEmailAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyEmailAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyEmailAddressRequest instance.
 */
VerifyEmailAddressRequestPrivate::VerifyEmailAddressRequestPrivate(
    const VerifyEmailAddressRequestPrivate &other, VerifyEmailAddressRequest * const q)
    : VerifyEmailAddressPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
