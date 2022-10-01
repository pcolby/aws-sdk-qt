// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinterconnectrequest.h"
#include "deleteinterconnectrequest_p.h"
#include "deleteinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteInterconnectRequest
 * \brief The DeleteInterconnectRequest class provides an interface for DirectConnect DeleteInterconnect requests.
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
 * \sa DirectConnectClient::deleteInterconnect
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInterconnectRequest::DeleteInterconnectRequest(const DeleteInterconnectRequest &other)
    : DirectConnectRequest(new DeleteInterconnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInterconnectRequest object.
 */
DeleteInterconnectRequest::DeleteInterconnectRequest()
    : DirectConnectRequest(new DeleteInterconnectRequestPrivate(DirectConnectRequest::DeleteInterconnectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInterconnectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInterconnectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInterconnectResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteInterconnectRequestPrivate
 * \brief The DeleteInterconnectRequestPrivate class provides private implementation for DeleteInterconnectRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteInterconnectRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteInterconnectRequestPrivate::DeleteInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, DeleteInterconnectRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInterconnectRequest
 * class' copy constructor.
 */
DeleteInterconnectRequestPrivate::DeleteInterconnectRequestPrivate(
    const DeleteInterconnectRequestPrivate &other, DeleteInterconnectRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
