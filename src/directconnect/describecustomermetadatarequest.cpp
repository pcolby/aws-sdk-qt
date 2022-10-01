// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecustomermetadatarequest.h"
#include "describecustomermetadatarequest_p.h"
#include "describecustomermetadataresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeCustomerMetadataRequest
 * \brief The DescribeCustomerMetadataRequest class provides an interface for DirectConnect DescribeCustomerMetadata requests.
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
 * \sa DirectConnectClient::describeCustomerMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCustomerMetadataRequest::DescribeCustomerMetadataRequest(const DescribeCustomerMetadataRequest &other)
    : DirectConnectRequest(new DescribeCustomerMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCustomerMetadataRequest object.
 */
DescribeCustomerMetadataRequest::DescribeCustomerMetadataRequest()
    : DirectConnectRequest(new DescribeCustomerMetadataRequestPrivate(DirectConnectRequest::DescribeCustomerMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCustomerMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCustomerMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCustomerMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCustomerMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeCustomerMetadataRequestPrivate
 * \brief The DescribeCustomerMetadataRequestPrivate class provides private implementation for DescribeCustomerMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeCustomerMetadataRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeCustomerMetadataRequestPrivate::DescribeCustomerMetadataRequestPrivate(
    const DirectConnectRequest::Action action, DescribeCustomerMetadataRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCustomerMetadataRequest
 * class' copy constructor.
 */
DescribeCustomerMetadataRequestPrivate::DescribeCustomerMetadataRequestPrivate(
    const DescribeCustomerMetadataRequestPrivate &other, DescribeCustomerMetadataRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
