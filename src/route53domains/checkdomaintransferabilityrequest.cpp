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

#include "checkdomaintransferabilityrequest.h"
#include "checkdomaintransferabilityrequest_p.h"
#include "checkdomaintransferabilityresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  CheckDomainTransferabilityRequest
 *
 * @brief  Implements Route53Domains CheckDomainTransferability requests.
 *
 * @see    Route53DomainsClient::checkDomainTransferability
 */

/**
 * @brief  Constructs a new CheckDomainTransferabilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CheckDomainTransferabilityRequest::CheckDomainTransferabilityRequest(const CheckDomainTransferabilityRequest &other)
    : Route53DomainsRequest(new CheckDomainTransferabilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CheckDomainTransferabilityRequest object.
 */
CheckDomainTransferabilityRequest::CheckDomainTransferabilityRequest()
    : Route53DomainsRequest(new CheckDomainTransferabilityRequestPrivate(Route53DomainsRequest::CheckDomainTransferabilityAction, this))
{

}

bool CheckDomainTransferabilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CheckDomainTransferabilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CheckDomainTransferabilityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * CheckDomainTransferabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDomainTransferabilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CheckDomainTransferabilityRequestPrivate
 *
 * @brief  Private implementation for CheckDomainTransferabilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainTransferabilityRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public CheckDomainTransferabilityRequest instance.
 */
CheckDomainTransferabilityRequestPrivate::CheckDomainTransferabilityRequestPrivate(
    const Route53DomainsRequest::Action action, CheckDomainTransferabilityRequest * const q)
    : CheckDomainTransferabilityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CheckDomainTransferabilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CheckDomainTransferabilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CheckDomainTransferabilityRequest instance.
 */
CheckDomainTransferabilityRequestPrivate::CheckDomainTransferabilityRequestPrivate(
    const CheckDomainTransferabilityRequestPrivate &other, CheckDomainTransferabilityRequest * const q)
    : CheckDomainTransferabilityPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
