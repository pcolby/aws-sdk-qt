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

#include "resendcontactreachabilityemailrequest.h"
#include "resendcontactreachabilityemailrequest_p.h"
#include "resendcontactreachabilityemailresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  ResendContactReachabilityEmailRequest
 *
 * @brief  Implements Route53Domains ResendContactReachabilityEmail requests.
 *
 * @see    Route53DomainsClient::resendContactReachabilityEmail
 */

/**
 * @brief  Constructs a new ResendContactReachabilityEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResendContactReachabilityEmailRequest::ResendContactReachabilityEmailRequest(const ResendContactReachabilityEmailRequest &other)
    : Route53DomainsRequest(new ResendContactReachabilityEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResendContactReachabilityEmailRequest object.
 */
ResendContactReachabilityEmailRequest::ResendContactReachabilityEmailRequest()
    : Route53DomainsRequest(new ResendContactReachabilityEmailRequestPrivate(Route53DomainsRequest::ResendContactReachabilityEmailAction, this))
{

}

bool ResendContactReachabilityEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResendContactReachabilityEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResendContactReachabilityEmailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * ResendContactReachabilityEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendContactReachabilityEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResendContactReachabilityEmailRequestPrivate
 *
 * @brief  Private implementation for ResendContactReachabilityEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendContactReachabilityEmailRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public ResendContactReachabilityEmailRequest instance.
 */
ResendContactReachabilityEmailRequestPrivate::ResendContactReachabilityEmailRequestPrivate(
    const Route53DomainsRequest::Action action, ResendContactReachabilityEmailRequest * const q)
    : ResendContactReachabilityEmailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResendContactReachabilityEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResendContactReachabilityEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResendContactReachabilityEmailRequest instance.
 */
ResendContactReachabilityEmailRequestPrivate::ResendContactReachabilityEmailRequestPrivate(
    const ResendContactReachabilityEmailRequestPrivate &other, ResendContactReachabilityEmailRequest * const q)
    : ResendContactReachabilityEmailPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
