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

#include "setidentitymailfromdomainrequest.h"
#include "setidentitymailfromdomainrequest_p.h"
#include "setidentitymailfromdomainresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  SetIdentityMailFromDomainRequest
 *
 * @brief  Implements SES SetIdentityMailFromDomain requests.
 *
 * @see    SESClient::setIdentityMailFromDomain
 */

/**
 * @brief  Constructs a new SetIdentityMailFromDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIdentityMailFromDomainRequest::SetIdentityMailFromDomainRequest(const SetIdentityMailFromDomainRequest &other)
    : SESRequest(new SetIdentityMailFromDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIdentityMailFromDomainRequest object.
 */
SetIdentityMailFromDomainRequest::SetIdentityMailFromDomainRequest()
    : SESRequest(new SetIdentityMailFromDomainRequestPrivate(SESRequest::SetIdentityMailFromDomainAction, this))
{

}

bool SetIdentityMailFromDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIdentityMailFromDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIdentityMailFromDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityMailFromDomainRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityMailFromDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIdentityMailFromDomainRequestPrivate
 *
 * @brief  Private implementation for SetIdentityMailFromDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityMailFromDomainRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SetIdentityMailFromDomainRequest instance.
 */
SetIdentityMailFromDomainRequestPrivate::SetIdentityMailFromDomainRequestPrivate(
    const SESRequest::Action action, SetIdentityMailFromDomainRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityMailFromDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityMailFromDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIdentityMailFromDomainRequest instance.
 */
SetIdentityMailFromDomainRequestPrivate::SetIdentityMailFromDomainRequestPrivate(
    const SetIdentityMailFromDomainRequestPrivate &other, SetIdentityMailFromDomainRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
