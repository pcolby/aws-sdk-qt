// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelagrequest.h"
#include "updatelagrequest_p.h"
#include "updatelagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateLagRequest
 * \brief The UpdateLagRequest class provides an interface for DirectConnect UpdateLag requests.
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
 * \sa DirectConnectClient::updateLag
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLagRequest::UpdateLagRequest(const UpdateLagRequest &other)
    : DirectConnectRequest(new UpdateLagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLagRequest object.
 */
UpdateLagRequest::UpdateLagRequest()
    : DirectConnectRequest(new UpdateLagRequestPrivate(DirectConnectRequest::UpdateLagAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLagRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLagResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::UpdateLagRequestPrivate
 * \brief The UpdateLagRequestPrivate class provides private implementation for UpdateLagRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateLagRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
UpdateLagRequestPrivate::UpdateLagRequestPrivate(
    const DirectConnectRequest::Action action, UpdateLagRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLagRequest
 * class' copy constructor.
 */
UpdateLagRequestPrivate::UpdateLagRequestPrivate(
    const UpdateLagRequestPrivate &other, UpdateLagRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
