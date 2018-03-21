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

#include "getdomainsuggestionsrequest.h"
#include "getdomainsuggestionsrequest_p.h"
#include "getdomainsuggestionsresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  GetDomainSuggestionsRequest
 *
 * @brief  Implements Route53Domains GetDomainSuggestions requests.
 *
 * @see    Route53DomainsClient::getDomainSuggestions
 */

/**
 * @brief  Constructs a new GetDomainSuggestionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDomainSuggestionsRequest::GetDomainSuggestionsRequest(const GetDomainSuggestionsRequest &other)
    : Route53DomainsRequest(new GetDomainSuggestionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDomainSuggestionsRequest object.
 */
GetDomainSuggestionsRequest::GetDomainSuggestionsRequest()
    : Route53DomainsRequest(new GetDomainSuggestionsRequestPrivate(Route53DomainsRequest::GetDomainSuggestionsAction, this))
{

}

bool GetDomainSuggestionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDomainSuggestionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDomainSuggestionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * GetDomainSuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainSuggestionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDomainSuggestionsRequestPrivate
 *
 * @brief  Private implementation for GetDomainSuggestionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainSuggestionsRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public GetDomainSuggestionsRequest instance.
 */
GetDomainSuggestionsRequestPrivate::GetDomainSuggestionsRequestPrivate(
    const Route53DomainsRequest::Action action, GetDomainSuggestionsRequest * const q)
    : GetDomainSuggestionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainSuggestionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDomainSuggestionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDomainSuggestionsRequest instance.
 */
GetDomainSuggestionsRequestPrivate::GetDomainSuggestionsRequestPrivate(
    const GetDomainSuggestionsRequestPrivate &other, GetDomainSuggestionsRequest * const q)
    : GetDomainSuggestionsPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS
