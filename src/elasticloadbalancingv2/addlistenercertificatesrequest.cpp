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

#include "addlistenercertificatesrequest.h"
#include "addlistenercertificatesrequest_p.h"
#include "addlistenercertificatesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  AddListenerCertificatesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 AddListenerCertificates requests.
 *
 * @see    ElasticLoadBalancingv2Client::addListenerCertificates
 */

/**
 * @brief  Constructs a new AddListenerCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddListenerCertificatesRequest::AddListenerCertificatesRequest(const AddListenerCertificatesRequest &other)
    : ElasticLoadBalancingv2Request(new AddListenerCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddListenerCertificatesRequest object.
 */
AddListenerCertificatesRequest::AddListenerCertificatesRequest()
    : ElasticLoadBalancingv2Request(new AddListenerCertificatesRequestPrivate(ElasticLoadBalancingv2Request::AddListenerCertificatesAction, this))
{

}

bool AddListenerCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddListenerCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddListenerCertificatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * AddListenerCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new AddListenerCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddListenerCertificatesRequestPrivate
 *
 * @brief  Private implementation for AddListenerCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddListenerCertificatesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public AddListenerCertificatesRequest instance.
 */
AddListenerCertificatesRequestPrivate::AddListenerCertificatesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, AddListenerCertificatesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddListenerCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddListenerCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddListenerCertificatesRequest instance.
 */
AddListenerCertificatesRequestPrivate::AddListenerCertificatesRequestPrivate(
    const AddListenerCertificatesRequestPrivate &other, AddListenerCertificatesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
