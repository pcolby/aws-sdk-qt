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

#include "configureaccesspointrequest.h"
#include "configureaccesspointrequest_p.h"
#include "configureaccesspointresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ConfigureAccessPointRequest
 * \brief The ConfigureAccessPointRequest class provides an interface for PrivateNetworks ConfigureAccessPoint requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::configureAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
ConfigureAccessPointRequest::ConfigureAccessPointRequest(const ConfigureAccessPointRequest &other)
    : PrivateNetworksRequest(new ConfigureAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfigureAccessPointRequest object.
 */
ConfigureAccessPointRequest::ConfigureAccessPointRequest()
    : PrivateNetworksRequest(new ConfigureAccessPointRequestPrivate(PrivateNetworksRequest::ConfigureAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool ConfigureAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfigureAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfigureAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new ConfigureAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ConfigureAccessPointRequestPrivate
 * \brief The ConfigureAccessPointRequestPrivate class provides private implementation for ConfigureAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ConfigureAccessPointRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ConfigureAccessPointRequestPrivate::ConfigureAccessPointRequestPrivate(
    const PrivateNetworksRequest::Action action, ConfigureAccessPointRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfigureAccessPointRequest
 * class' copy constructor.
 */
ConfigureAccessPointRequestPrivate::ConfigureAccessPointRequestPrivate(
    const ConfigureAccessPointRequestPrivate &other, ConfigureAccessPointRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
