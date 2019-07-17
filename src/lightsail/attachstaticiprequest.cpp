/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "attachstaticiprequest.h"
#include "attachstaticiprequest_p.h"
#include "attachstaticipresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::AttachStaticIpRequest
 * \brief The AttachStaticIpRequest class provides an interface for Lightsail AttachStaticIp requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, a managed database, SSD-based
 *  storage, data transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail
 *  servers through the Lightsail console or by using the API or command-line interface
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
 * \sa LightsailClient::attachStaticIp
 */

/*!
 * Constructs a copy of \a other.
 */
AttachStaticIpRequest::AttachStaticIpRequest(const AttachStaticIpRequest &other)
    : LightsailRequest(new AttachStaticIpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachStaticIpRequest object.
 */
AttachStaticIpRequest::AttachStaticIpRequest()
    : LightsailRequest(new AttachStaticIpRequestPrivate(LightsailRequest::AttachStaticIpAction, this))
{

}

/*!
 * \reimp
 */
bool AttachStaticIpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachStaticIpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new AttachStaticIpResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::AttachStaticIpRequestPrivate
 * \brief The AttachStaticIpRequestPrivate class provides private implementation for AttachStaticIpRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a AttachStaticIpRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
AttachStaticIpRequestPrivate::AttachStaticIpRequestPrivate(
    const LightsailRequest::Action action, AttachStaticIpRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachStaticIpRequest
 * class' copy constructor.
 */
AttachStaticIpRequestPrivate::AttachStaticIpRequestPrivate(
    const AttachStaticIpRequestPrivate &other, AttachStaticIpRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
