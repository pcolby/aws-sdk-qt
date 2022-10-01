// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewayattachmentsrequest.h"
#include "describedirectconnectgatewayattachmentsrequest_p.h"
#include "describedirectconnectgatewayattachmentsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAttachmentsRequest
 * \brief The DescribeDirectConnectGatewayAttachmentsRequest class provides an interface for DirectConnect DescribeDirectConnectGatewayAttachments requests.
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
 * \sa DirectConnectClient::describeDirectConnectGatewayAttachments
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDirectConnectGatewayAttachmentsRequest::DescribeDirectConnectGatewayAttachmentsRequest(const DescribeDirectConnectGatewayAttachmentsRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewayAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDirectConnectGatewayAttachmentsRequest object.
 */
DescribeDirectConnectGatewayAttachmentsRequest::DescribeDirectConnectGatewayAttachmentsRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewayAttachmentsRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewayAttachmentsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDirectConnectGatewayAttachmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDirectConnectGatewayAttachmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectConnectGatewayAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewayAttachmentsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAttachmentsRequestPrivate
 * \brief The DescribeDirectConnectGatewayAttachmentsRequestPrivate class provides private implementation for DescribeDirectConnectGatewayAttachmentsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAttachmentsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeDirectConnectGatewayAttachmentsRequestPrivate::DescribeDirectConnectGatewayAttachmentsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewayAttachmentsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewayAttachmentsRequest
 * class' copy constructor.
 */
DescribeDirectConnectGatewayAttachmentsRequestPrivate::DescribeDirectConnectGatewayAttachmentsRequestPrivate(
    const DescribeDirectConnectGatewayAttachmentsRequestPrivate &other, DescribeDirectConnectGatewayAttachmentsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
