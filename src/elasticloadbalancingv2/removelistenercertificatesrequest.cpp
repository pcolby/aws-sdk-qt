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

#include "removelistenercertificatesrequest.h"
#include "removelistenercertificatesrequest_p.h"
#include "removelistenercertificatesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  RemoveListenerCertificatesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 RemoveListenerCertificates requests.
 *
 * @see    ElasticLoadBalancingv2Client::removeListenerCertificates
 */

/**
 * @brief  Constructs a new RemoveListenerCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveListenerCertificatesResponse::RemoveListenerCertificatesResponse(

/**
 * @brief  Constructs a new RemoveListenerCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveListenerCertificatesRequest::RemoveListenerCertificatesRequest(const RemoveListenerCertificatesRequest &other)
    : ElasticLoadBalancingv2Request(new RemoveListenerCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveListenerCertificatesRequest object.
 */
RemoveListenerCertificatesRequest::RemoveListenerCertificatesRequest()
    : ElasticLoadBalancingv2Request(new RemoveListenerCertificatesRequestPrivate(ElasticLoadBalancingv2Request::RemoveListenerCertificatesAction, this))
{

}

bool RemoveListenerCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveListenerCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveListenerCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * RemoveListenerCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new RemoveListenerCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveListenerCertificatesRequestPrivate
 *
 * @brief  Private implementation for RemoveListenerCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveListenerCertificatesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public RemoveListenerCertificatesRequest instance.
 */
RemoveListenerCertificatesRequestPrivate::RemoveListenerCertificatesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, RemoveListenerCertificatesRequest * const q)
    : RemoveListenerCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveListenerCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveListenerCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveListenerCertificatesRequest instance.
 */
RemoveListenerCertificatesRequestPrivate::RemoveListenerCertificatesRequestPrivate(
    const RemoveListenerCertificatesRequestPrivate &other, RemoveListenerCertificatesRequest * const q)
    : RemoveListenerCertificatesPrivate(other, q)
{

}
