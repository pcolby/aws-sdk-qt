// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationsrequest.h"
#include "describelocationsrequest_p.h"
#include "describelocationsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLocationsRequest
 * \brief The DescribeLocationsRequest class provides an interface for DirectConnect DescribeLocations requests.
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
 * \sa DirectConnectClient::describeLocations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationsRequest::DescribeLocationsRequest(const DescribeLocationsRequest &other)
    : DirectConnectRequest(new DescribeLocationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationsRequest object.
 */
DescribeLocationsRequest::DescribeLocationsRequest()
    : DirectConnectRequest(new DescribeLocationsRequestPrivate(DirectConnectRequest::DescribeLocationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeLocationsRequestPrivate
 * \brief The DescribeLocationsRequestPrivate class provides private implementation for DescribeLocationsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLocationsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeLocationsRequestPrivate::DescribeLocationsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeLocationsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationsRequest
 * class' copy constructor.
 */
DescribeLocationsRequestPrivate::DescribeLocationsRequestPrivate(
    const DescribeLocationsRequestPrivate &other, DescribeLocationsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
