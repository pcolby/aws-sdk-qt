// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
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
