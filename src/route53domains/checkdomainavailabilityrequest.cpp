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

#include "checkdomainavailabilityrequest.h"
#include "checkdomainavailabilityrequest_p.h"
#include "checkdomainavailabilityresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  CheckDomainAvailabilityRequest
 *
 * @brief  Implements Route53Domains CheckDomainAvailability requests.
 *
 * @see    Route53DomainsClient::checkDomainAvailability
 */

/**
 * @brief  Constructs a new CheckDomainAvailabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CheckDomainAvailabilityResponse::CheckDomainAvailabilityResponse(

/**
 * @brief  Constructs a new CheckDomainAvailabilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CheckDomainAvailabilityRequest::CheckDomainAvailabilityRequest(const CheckDomainAvailabilityRequest &other)
    : Route53DomainsRequest(new CheckDomainAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CheckDomainAvailabilityRequest object.
 */
CheckDomainAvailabilityRequest::CheckDomainAvailabilityRequest()
    : Route53DomainsRequest(new CheckDomainAvailabilityRequestPrivate(Route53DomainsRequest::CheckDomainAvailabilityAction, this))
{

}

bool CheckDomainAvailabilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CheckDomainAvailabilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CheckDomainAvailabilityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * CheckDomainAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDomainAvailabilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CheckDomainAvailabilityRequestPrivate
 *
 * @brief  Private implementation for CheckDomainAvailabilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainAvailabilityRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public CheckDomainAvailabilityRequest instance.
 */
CheckDomainAvailabilityRequestPrivate::CheckDomainAvailabilityRequestPrivate(
    const Route53DomainsRequest::Action action, CheckDomainAvailabilityRequest * const q)
    : CheckDomainAvailabilityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainAvailabilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CheckDomainAvailabilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CheckDomainAvailabilityRequest instance.
 */
CheckDomainAvailabilityRequestPrivate::CheckDomainAvailabilityRequestPrivate(
    const CheckDomainAvailabilityRequestPrivate &other, CheckDomainAvailabilityRequest * const q)
    : CheckDomainAvailabilityPrivate(other, q)
{

}
