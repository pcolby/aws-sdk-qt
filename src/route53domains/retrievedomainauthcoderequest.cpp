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

#include "retrievedomainauthcoderequest.h"
#include "retrievedomainauthcoderequest_p.h"
#include "retrievedomainauthcoderesponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  RetrieveDomainAuthCodeRequest
 *
 * @brief  Implements Route53Domains RetrieveDomainAuthCode requests.
 *
 * @see    Route53DomainsClient::retrieveDomainAuthCode
 */

/**
 * @brief  Constructs a new RetrieveDomainAuthCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest(const RetrieveDomainAuthCodeRequest &other)
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetrieveDomainAuthCodeRequest object.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest()
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(Route53DomainsRequest::RetrieveDomainAuthCodeAction, this))
{

}

bool RetrieveDomainAuthCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetrieveDomainAuthCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetrieveDomainAuthCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * RetrieveDomainAuthCodeRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveDomainAuthCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetrieveDomainAuthCodeRequestPrivate
 *
 * @brief  Private implementation for RetrieveDomainAuthCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveDomainAuthCodeRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public RetrieveDomainAuthCodeRequest instance.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const Route53DomainsRequest::Action action, RetrieveDomainAuthCodeRequest * const q)
    : RetrieveDomainAuthCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveDomainAuthCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetrieveDomainAuthCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetrieveDomainAuthCodeRequest instance.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const RetrieveDomainAuthCodeRequestPrivate &other, RetrieveDomainAuthCodeRequest * const q)
    : RetrieveDomainAuthCodePrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS
