/*
    Copyright 2013-2021 Paul Colby

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

#include "startbgpfailovertestrequest.h"
#include "startbgpfailovertestrequest_p.h"
#include "startbgpfailovertestresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::StartBgpFailoverTestRequest
 * \brief The StartBgpFailoverTestRequest class provides an interface for DirectConnect StartBgpFailoverTest requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::startBgpFailoverTest
 */

/*!
 * Constructs a copy of \a other.
 */
StartBgpFailoverTestRequest::StartBgpFailoverTestRequest(const StartBgpFailoverTestRequest &other)
    : DirectConnectRequest(new StartBgpFailoverTestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBgpFailoverTestRequest object.
 */
StartBgpFailoverTestRequest::StartBgpFailoverTestRequest()
    : DirectConnectRequest(new StartBgpFailoverTestRequestPrivate(DirectConnectRequest::StartBgpFailoverTestAction, this))
{

}

/*!
 * \reimp
 */
bool StartBgpFailoverTestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBgpFailoverTestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBgpFailoverTestRequest::response(QNetworkReply * const reply) const
{
    return new StartBgpFailoverTestResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::StartBgpFailoverTestRequestPrivate
 * \brief The StartBgpFailoverTestRequestPrivate class provides private implementation for StartBgpFailoverTestRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a StartBgpFailoverTestRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
StartBgpFailoverTestRequestPrivate::StartBgpFailoverTestRequestPrivate(
    const DirectConnectRequest::Action action, StartBgpFailoverTestRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBgpFailoverTestRequest
 * class' copy constructor.
 */
StartBgpFailoverTestRequestPrivate::StartBgpFailoverTestRequestPrivate(
    const StartBgpFailoverTestRequestPrivate &other, StartBgpFailoverTestRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
