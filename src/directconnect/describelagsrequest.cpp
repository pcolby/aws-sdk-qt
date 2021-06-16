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

#include "describelagsrequest.h"
#include "describelagsrequest_p.h"
#include "describelagsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLagsRequest
 * \brief The DescribeLagsRequest class provides an interface for DirectConnect DescribeLags requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::describeLags
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLagsRequest::DescribeLagsRequest(const DescribeLagsRequest &other)
    : DirectConnectRequest(new DescribeLagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLagsRequest object.
 */
DescribeLagsRequest::DescribeLagsRequest()
    : DirectConnectRequest(new DescribeLagsRequestPrivate(DirectConnectRequest::DescribeLagsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLagsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeLagsRequestPrivate
 * \brief The DescribeLagsRequestPrivate class provides private implementation for DescribeLagsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLagsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeLagsRequestPrivate::DescribeLagsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeLagsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLagsRequest
 * class' copy constructor.
 */
DescribeLagsRequestPrivate::DescribeLagsRequestPrivate(
    const DescribeLagsRequestPrivate &other, DescribeLagsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
