// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatedeviceidentifierrequest.h"
#include "deactivatedeviceidentifierrequest_p.h"
#include "deactivatedeviceidentifierresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierRequest
 * \brief The DeactivateDeviceIdentifierRequest class provides an interface for PrivateNetworks DeactivateDeviceIdentifier requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deactivateDeviceIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateDeviceIdentifierRequest::DeactivateDeviceIdentifierRequest(const DeactivateDeviceIdentifierRequest &other)
    : PrivateNetworksRequest(new DeactivateDeviceIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateDeviceIdentifierRequest object.
 */
DeactivateDeviceIdentifierRequest::DeactivateDeviceIdentifierRequest()
    : PrivateNetworksRequest(new DeactivateDeviceIdentifierRequestPrivate(PrivateNetworksRequest::DeactivateDeviceIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateDeviceIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateDeviceIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateDeviceIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateDeviceIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierRequestPrivate
 * \brief The DeactivateDeviceIdentifierRequestPrivate class provides private implementation for DeactivateDeviceIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeactivateDeviceIdentifierRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
DeactivateDeviceIdentifierRequestPrivate::DeactivateDeviceIdentifierRequestPrivate(
    const PrivateNetworksRequest::Action action, DeactivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateDeviceIdentifierRequest
 * class' copy constructor.
 */
DeactivateDeviceIdentifierRequestPrivate::DeactivateDeviceIdentifierRequestPrivate(
    const DeactivateDeviceIdentifierRequestPrivate &other, DeactivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
