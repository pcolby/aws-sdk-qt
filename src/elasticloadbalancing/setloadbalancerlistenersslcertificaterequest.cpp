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

#include "setloadbalancerlistenersslcertificaterequest.h"
#include "setloadbalancerlistenersslcertificaterequest_p.h"
#include "setloadbalancerlistenersslcertificateresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerListenerSSLCertificateRequest
 *
 * @brief  Implements ElasticLoadBalancing SetLoadBalancerListenerSSLCertificate requests.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerListenerSSLCertificate
 */

/**
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLoadBalancerListenerSSLCertificateRequest::SetLoadBalancerListenerSSLCertificateRequest(const SetLoadBalancerListenerSSLCertificateRequest &other)
    : ElasticLoadBalancingRequest(new SetLoadBalancerListenerSSLCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateRequest object.
 */
SetLoadBalancerListenerSSLCertificateRequest::SetLoadBalancerListenerSSLCertificateRequest()
    : ElasticLoadBalancingRequest(new SetLoadBalancerListenerSSLCertificateRequestPrivate(ElasticLoadBalancingRequest::SetLoadBalancerListenerSSLCertificateAction, this))
{

}

bool SetLoadBalancerListenerSSLCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLoadBalancerListenerSSLCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLoadBalancerListenerSSLCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * SetLoadBalancerListenerSSLCertificateRequest::response(QNetworkReply * const reply) const
{
    return new SetLoadBalancerListenerSSLCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLoadBalancerListenerSSLCertificateRequestPrivate
 *
 * @brief  Private implementation for SetLoadBalancerListenerSSLCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public SetLoadBalancerListenerSSLCertificateRequest instance.
 */
SetLoadBalancerListenerSSLCertificateRequestPrivate::SetLoadBalancerListenerSSLCertificateRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, SetLoadBalancerListenerSSLCertificateRequest * const q)
    : SetLoadBalancerListenerSSLCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLoadBalancerListenerSSLCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLoadBalancerListenerSSLCertificateRequest instance.
 */
SetLoadBalancerListenerSSLCertificateRequestPrivate::SetLoadBalancerListenerSSLCertificateRequestPrivate(
    const SetLoadBalancerListenerSSLCertificateRequestPrivate &other, SetLoadBalancerListenerSSLCertificateRequest * const q)
    : SetLoadBalancerListenerSSLCertificatePrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
