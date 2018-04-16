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

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateLoadBalancerTlsCertificateRequest
 *
 * \brief The CreateLoadBalancerTlsCertificateRequest class encapsulates Lightsail CreateLoadBalancerTlsCertificate requests.
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
 * \sa LightsailClient::createLoadBalancerTlsCertificate
 */

/*!
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoadBalancerTlsCertificateRequest::CreateLoadBalancerTlsCertificateRequest(const CreateLoadBalancerTlsCertificateRequest &other)
    : LightsailRequest(new CreateLoadBalancerTlsCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequest object.
 */
CreateLoadBalancerTlsCertificateRequest::CreateLoadBalancerTlsCertificateRequest()
    : LightsailRequest(new CreateLoadBalancerTlsCertificateRequestPrivate(LightsailRequest::CreateLoadBalancerTlsCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoadBalancerTlsCertificateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateLoadBalancerTlsCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoadBalancerTlsCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoadBalancerTlsCertificateRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoadBalancerTlsCertificateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateLoadBalancerTlsCertificateRequestPrivate
 *
 * @brief  Private implementation for CreateLoadBalancerTlsCertificateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateLoadBalancerTlsCertificateRequest instance.
 */
CreateLoadBalancerTlsCertificateRequestPrivate::CreateLoadBalancerTlsCertificateRequestPrivate(
    const LightsailRequest::Action action, CreateLoadBalancerTlsCertificateRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
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
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
