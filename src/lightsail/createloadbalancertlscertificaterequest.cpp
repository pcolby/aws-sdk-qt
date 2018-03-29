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

#include "createloadbalancertlscertificaterequest.h"
#include "createloadbalancertlscertificaterequest_p.h"
#include "createloadbalancertlscertificateresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateLoadBalancerTlsCertificateRequest
 *
 * @brief  Implements Lightsail CreateLoadBalancerTlsCertificate requests.
 *
 * @see    LightsailClient::createLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoadBalancerTlsCertificateRequest::CreateLoadBalancerTlsCertificateRequest(const CreateLoadBalancerTlsCertificateRequest &other)
    : LightsailRequest(new CreateLoadBalancerTlsCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequest object.
 */
CreateLoadBalancerTlsCertificateRequest::CreateLoadBalancerTlsCertificateRequest()
    : LightsailRequest(new CreateLoadBalancerTlsCertificateRequestPrivate(LightsailRequest::CreateLoadBalancerTlsCertificateAction, this))
{

}

bool CreateLoadBalancerTlsCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoadBalancerTlsCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoadBalancerTlsCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateLoadBalancerTlsCertificateRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoadBalancerTlsCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerTlsCertificateRequestPrivate
 *
 * @brief  Private implementation for CreateLoadBalancerTlsCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateLoadBalancerTlsCertificateRequest instance.
 */
CreateLoadBalancerTlsCertificateRequestPrivate::CreateLoadBalancerTlsCertificateRequestPrivate(
    const LightsailRequest::Action action, CreateLoadBalancerTlsCertificateRequest * const q)
    : CreateLoadBalancerTlsCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoadBalancerTlsCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoadBalancerTlsCertificateRequest instance.
 */
CreateLoadBalancerTlsCertificateRequestPrivate::CreateLoadBalancerTlsCertificateRequestPrivate(
    const CreateLoadBalancerTlsCertificateRequestPrivate &other, CreateLoadBalancerTlsCertificateRequest * const q)
    : CreateLoadBalancerTlsCertificatePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
