// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloarequest.h"
#include "describeloarequest_p.h"
#include "describeloaresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeLoaRequest
 * \brief The DescribeLoaRequest class provides an interface for DirectConnect DescribeLoa requests.
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
 * \sa DirectConnectClient::describeLoa
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoaRequest::DescribeLoaRequest(const DescribeLoaRequest &other)
    : DirectConnectRequest(new DescribeLoaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoaRequest object.
 */
DescribeLoaRequest::DescribeLoaRequest()
    : DirectConnectRequest(new DescribeLoaRequestPrivate(DirectConnectRequest::DescribeLoaAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoaResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeLoaRequestPrivate
 * \brief The DescribeLoaRequestPrivate class provides private implementation for DescribeLoaRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeLoaRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeLoaRequestPrivate::DescribeLoaRequestPrivate(
    const DirectConnectRequest::Action action, DescribeLoaRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoaRequest
 * class' copy constructor.
 */
DescribeLoaRequestPrivate::DescribeLoaRequestPrivate(
    const DescribeLoaRequestPrivate &other, DescribeLoaRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
