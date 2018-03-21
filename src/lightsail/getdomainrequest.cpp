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

#include "getdomainrequest.h"
#include "getdomainrequest_p.h"
#include "getdomainresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDomainRequest
 *
 * @brief  Implements Lightsail GetDomain requests.
 *
 * @see    LightsailClient::getDomain
 */

/**
 * @brief  Constructs a new GetDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainResponse::GetDomainResponse(

/**
 * @brief  Constructs a new GetDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDomainRequest::GetDomainRequest(const GetDomainRequest &other)
    : LightsailRequest(new GetDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDomainRequest object.
 */
GetDomainRequest::GetDomainRequest()
    : LightsailRequest(new GetDomainRequestPrivate(LightsailRequest::GetDomainAction, this))
{

}

bool GetDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetDomainRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDomainRequestPrivate
 *
 * @brief  Private implementation for GetDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetDomainRequest instance.
 */
GetDomainRequestPrivate::GetDomainRequestPrivate(
    const LightsailRequest::Action action, GetDomainRequest * const q)
    : GetDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDomainRequest instance.
 */
GetDomainRequestPrivate::GetDomainRequestPrivate(
    const GetDomainRequestPrivate &other, GetDomainRequest * const q)
    : GetDomainPrivate(other, q)
{

}
