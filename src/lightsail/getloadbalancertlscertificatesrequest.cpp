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

#include "getloadbalancertlscertificatesrequest.h"
#include "getloadbalancertlscertificatesrequest_p.h"
#include "getloadbalancertlscertificatesresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancerTlsCertificatesRequest
 *
 * @brief  Implements Lightsail GetLoadBalancerTlsCertificates requests.
 *
 * @see    LightsailClient::getLoadBalancerTlsCertificates
 */

/**
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerTlsCertificatesResponse::GetLoadBalancerTlsCertificatesResponse(

/**
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoadBalancerTlsCertificatesRequest::GetLoadBalancerTlsCertificatesRequest(const GetLoadBalancerTlsCertificatesRequest &other)
    : LightsailRequest(new GetLoadBalancerTlsCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesRequest object.
 */
GetLoadBalancerTlsCertificatesRequest::GetLoadBalancerTlsCertificatesRequest()
    : LightsailRequest(new GetLoadBalancerTlsCertificatesRequestPrivate(LightsailRequest::GetLoadBalancerTlsCertificatesAction, this))
{

}

bool GetLoadBalancerTlsCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoadBalancerTlsCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoadBalancerTlsCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetLoadBalancerTlsCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new GetLoadBalancerTlsCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoadBalancerTlsCertificatesRequestPrivate
 *
 * @brief  Private implementation for GetLoadBalancerTlsCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetLoadBalancerTlsCertificatesRequest instance.
 */
GetLoadBalancerTlsCertificatesRequestPrivate::GetLoadBalancerTlsCertificatesRequestPrivate(
    const LightsailRequest::Action action, GetLoadBalancerTlsCertificatesRequest * const q)
    : GetLoadBalancerTlsCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoadBalancerTlsCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoadBalancerTlsCertificatesRequest instance.
 */
GetLoadBalancerTlsCertificatesRequestPrivate::GetLoadBalancerTlsCertificatesRequestPrivate(
    const GetLoadBalancerTlsCertificatesRequestPrivate &other, GetLoadBalancerTlsCertificatesRequest * const q)
    : GetLoadBalancerTlsCertificatesPrivate(other, q)
{

}
