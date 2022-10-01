// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualinterfacetesthistoryrequest.h"
#include "listvirtualinterfacetesthistoryrequest_p.h"
#include "listvirtualinterfacetesthistoryresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ListVirtualInterfaceTestHistoryRequest
 * \brief The ListVirtualInterfaceTestHistoryRequest class provides an interface for DirectConnect ListVirtualInterfaceTestHistory requests.
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
 * \sa DirectConnectClient::listVirtualInterfaceTestHistory
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualInterfaceTestHistoryRequest::ListVirtualInterfaceTestHistoryRequest(const ListVirtualInterfaceTestHistoryRequest &other)
    : DirectConnectRequest(new ListVirtualInterfaceTestHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualInterfaceTestHistoryRequest object.
 */
ListVirtualInterfaceTestHistoryRequest::ListVirtualInterfaceTestHistoryRequest()
    : DirectConnectRequest(new ListVirtualInterfaceTestHistoryRequestPrivate(DirectConnectRequest::ListVirtualInterfaceTestHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualInterfaceTestHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualInterfaceTestHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualInterfaceTestHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualInterfaceTestHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ListVirtualInterfaceTestHistoryRequestPrivate
 * \brief The ListVirtualInterfaceTestHistoryRequestPrivate class provides private implementation for ListVirtualInterfaceTestHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ListVirtualInterfaceTestHistoryRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ListVirtualInterfaceTestHistoryRequestPrivate::ListVirtualInterfaceTestHistoryRequestPrivate(
    const DirectConnectRequest::Action action, ListVirtualInterfaceTestHistoryRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualInterfaceTestHistoryRequest
 * class' copy constructor.
 */
ListVirtualInterfaceTestHistoryRequestPrivate::ListVirtualInterfaceTestHistoryRequestPrivate(
    const ListVirtualInterfaceTestHistoryRequestPrivate &other, ListVirtualInterfaceTestHistoryRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
