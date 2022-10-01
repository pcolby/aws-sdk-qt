// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinterconnectloarequest.h"
#include "describeinterconnectloarequest_p.h"
#include "describeinterconnectloaresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectLoaRequest
 * \brief The DescribeInterconnectLoaRequest class provides an interface for DirectConnect DescribeInterconnectLoa requests.
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
 * \sa DirectConnectClient::describeInterconnectLoa
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInterconnectLoaRequest::DescribeInterconnectLoaRequest(const DescribeInterconnectLoaRequest &other)
    : DirectConnectRequest(new DescribeInterconnectLoaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInterconnectLoaRequest object.
 */
DescribeInterconnectLoaRequest::DescribeInterconnectLoaRequest()
    : DirectConnectRequest(new DescribeInterconnectLoaRequestPrivate(DirectConnectRequest::DescribeInterconnectLoaAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInterconnectLoaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInterconnectLoaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInterconnectLoaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInterconnectLoaResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectLoaRequestPrivate
 * \brief The DescribeInterconnectLoaRequestPrivate class provides private implementation for DescribeInterconnectLoaRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeInterconnectLoaRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeInterconnectLoaRequestPrivate::DescribeInterconnectLoaRequestPrivate(
    const DirectConnectRequest::Action action, DescribeInterconnectLoaRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInterconnectLoaRequest
 * class' copy constructor.
 */
DescribeInterconnectLoaRequestPrivate::DescribeInterconnectLoaRequestPrivate(
    const DescribeInterconnectLoaRequestPrivate &other, DescribeInterconnectLoaRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
