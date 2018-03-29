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

#include "resendvalidationemailrequest.h"
#include "resendvalidationemailrequest_p.h"
#include "resendvalidationemailresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/**
 * @class  ResendValidationEmailRequest
 *
 * @brief  Implements ACM ResendValidationEmail requests.
 *
 * @see    ACMClient::resendValidationEmail
 */

/**
 * @brief  Constructs a new ResendValidationEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest(const ResendValidationEmailRequest &other)
    : ACMRequest(new ResendValidationEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResendValidationEmailRequest object.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest()
    : ACMRequest(new ResendValidationEmailRequestPrivate(ACMRequest::ResendValidationEmailAction, this))
{

}

bool ResendValidationEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResendValidationEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResendValidationEmailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMClient::send
 */
QtAws::Core::AwsAbstractResponse * ResendValidationEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendValidationEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResendValidationEmailRequestPrivate
 *
 * @brief  Private implementation for ResendValidationEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendValidationEmailRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public ResendValidationEmailRequest instance.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ACMRequest::Action action, ResendValidationEmailRequest * const q)
    : ACMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResendValidationEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResendValidationEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResendValidationEmailRequest instance.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ResendValidationEmailRequestPrivate &other, ResendValidationEmailRequest * const q)
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
