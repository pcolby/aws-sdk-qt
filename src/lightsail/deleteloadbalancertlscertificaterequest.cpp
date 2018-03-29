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

#include "deleteloadbalancertlscertificaterequest.h"
#include "deleteloadbalancertlscertificaterequest_p.h"
#include "deleteloadbalancertlscertificateresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteLoadBalancerTlsCertificateRequest
 *
 * @brief  Implements Lightsail DeleteLoadBalancerTlsCertificate requests.
 *
 * @see    LightsailClient::deleteLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoadBalancerTlsCertificateRequest::DeleteLoadBalancerTlsCertificateRequest(const DeleteLoadBalancerTlsCertificateRequest &other)
    : LightsailRequest(new DeleteLoadBalancerTlsCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateRequest object.
 */
DeleteLoadBalancerTlsCertificateRequest::DeleteLoadBalancerTlsCertificateRequest()
    : LightsailRequest(new DeleteLoadBalancerTlsCertificateRequestPrivate(LightsailRequest::DeleteLoadBalancerTlsCertificateAction, this))
{

}

bool DeleteLoadBalancerTlsCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoadBalancerTlsCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoadBalancerTlsCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteLoadBalancerTlsCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerTlsCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerTlsCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerTlsCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteLoadBalancerTlsCertificateRequest instance.
 */
DeleteLoadBalancerTlsCertificateRequestPrivate::DeleteLoadBalancerTlsCertificateRequestPrivate(
    const LightsailRequest::Action action, DeleteLoadBalancerTlsCertificateRequest * const q)
    : DeleteLoadBalancerTlsCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerTlsCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoadBalancerTlsCertificateRequest instance.
 */
DeleteLoadBalancerTlsCertificateRequestPrivate::DeleteLoadBalancerTlsCertificateRequestPrivate(
    const DeleteLoadBalancerTlsCertificateRequestPrivate &other, DeleteLoadBalancerTlsCertificateRequest * const q)
    : DeleteLoadBalancerTlsCertificatePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
