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

#include "pingrequest.h"
#include "pingrequest_p.h"
#include "pingresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::PingRequest
 * \brief The PingRequest class provides an interface for PrivateNetworks Ping requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::ping
 */

/*!
 * Constructs a copy of \a other.
 */
PingRequest::PingRequest(const PingRequest &other)
    : PrivateNetworksRequest(new PingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PingRequest object.
 */
PingRequest::PingRequest()
    : PrivateNetworksRequest(new PingRequestPrivate(PrivateNetworksRequest::PingAction, this))
{

}

/*!
 * \reimp
 */
bool PingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PingRequest::response(QNetworkReply * const reply) const
{
    return new PingResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::PingRequestPrivate
 * \brief The PingRequestPrivate class provides private implementation for PingRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PingRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
PingRequestPrivate::PingRequestPrivate(
    const PrivateNetworksRequest::Action action, PingRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PingRequest
 * class' copy constructor.
 */
PingRequestPrivate::PingRequestPrivate(
    const PingRequestPrivate &other, PingRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
