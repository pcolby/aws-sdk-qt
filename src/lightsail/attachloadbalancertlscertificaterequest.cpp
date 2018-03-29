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

#include "attachloadbalancertlscertificaterequest.h"
#include "attachloadbalancertlscertificaterequest_p.h"
#include "attachloadbalancertlscertificateresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  AttachLoadBalancerTlsCertificateRequest
 *
 * @brief  Implements Lightsail AttachLoadBalancerTlsCertificate requests.
 *
 * @see    LightsailClient::attachLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachLoadBalancerTlsCertificateRequest::AttachLoadBalancerTlsCertificateRequest(const AttachLoadBalancerTlsCertificateRequest &other)
    : LightsailRequest(new AttachLoadBalancerTlsCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateRequest object.
 */
AttachLoadBalancerTlsCertificateRequest::AttachLoadBalancerTlsCertificateRequest()
    : LightsailRequest(new AttachLoadBalancerTlsCertificateRequestPrivate(LightsailRequest::AttachLoadBalancerTlsCertificateAction, this))
{

}

bool AttachLoadBalancerTlsCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachLoadBalancerTlsCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachLoadBalancerTlsCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * AttachLoadBalancerTlsCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancerTlsCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerTlsCertificateRequestPrivate
 *
 * @brief  Private implementation for AttachLoadBalancerTlsCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public AttachLoadBalancerTlsCertificateRequest instance.
 */
AttachLoadBalancerTlsCertificateRequestPrivate::AttachLoadBalancerTlsCertificateRequestPrivate(
    const LightsailRequest::Action action, AttachLoadBalancerTlsCertificateRequest * const q)
    : AttachLoadBalancerTlsCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancerTlsCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachLoadBalancerTlsCertificateRequest instance.
 */
AttachLoadBalancerTlsCertificateRequestPrivate::AttachLoadBalancerTlsCertificateRequestPrivate(
    const AttachLoadBalancerTlsCertificateRequestPrivate &other, AttachLoadBalancerTlsCertificateRequest * const q)
    : AttachLoadBalancerTlsCertificatePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
