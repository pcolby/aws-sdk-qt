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

#include "getloadbalancerrequest.h"
#include "getloadbalancerrequest_p.h"
#include "getloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetLoadBalancerRequest
 *
 * \brief The GetLoadBalancerRequest class provides an interface for Lightsail GetLoadBalancer requests.
 *
 * \ingroup Lightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::getLoadBalancer
 */

/*!
 * @brief  Constructs a new GetLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoadBalancerRequest::GetLoadBalancerRequest(const GetLoadBalancerRequest &other)
    : LightsailRequest(new GetLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetLoadBalancerRequest object.
 */
GetLoadBalancerRequest::GetLoadBalancerRequest()
    : LightsailRequest(new GetLoadBalancerRequestPrivate(LightsailRequest::GetLoadBalancerAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoadBalancerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoadBalancerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new GetLoadBalancerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for GetLoadBalancerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetLoadBalancerRequest instance.
 */
GetLoadBalancerRequestPrivate::GetLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, GetLoadBalancerRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoadBalancerRequest instance.
 */
GetLoadBalancerRequestPrivate::GetLoadBalancerRequestPrivate(
    const GetLoadBalancerRequestPrivate &other, GetLoadBalancerRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
