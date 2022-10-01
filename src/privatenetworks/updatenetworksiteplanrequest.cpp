// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksiteplanrequest.h"
#include "updatenetworksiteplanrequest_p.h"
#include "updatenetworksiteplanresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanRequest
 * \brief The UpdateNetworkSitePlanRequest class provides an interface for PrivateNetworks UpdateNetworkSitePlan requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::updateNetworkSitePlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkSitePlanRequest::UpdateNetworkSitePlanRequest(const UpdateNetworkSitePlanRequest &other)
    : PrivateNetworksRequest(new UpdateNetworkSitePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkSitePlanRequest object.
 */
UpdateNetworkSitePlanRequest::UpdateNetworkSitePlanRequest()
    : PrivateNetworksRequest(new UpdateNetworkSitePlanRequestPrivate(PrivateNetworksRequest::UpdateNetworkSitePlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkSitePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkSitePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkSitePlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkSitePlanResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanRequestPrivate
 * \brief The UpdateNetworkSitePlanRequestPrivate class provides private implementation for UpdateNetworkSitePlanRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a UpdateNetworkSitePlanRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
UpdateNetworkSitePlanRequestPrivate::UpdateNetworkSitePlanRequestPrivate(
    const PrivateNetworksRequest::Action action, UpdateNetworkSitePlanRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkSitePlanRequest
 * class' copy constructor.
 */
UpdateNetworkSitePlanRequestPrivate::UpdateNetworkSitePlanRequestPrivate(
    const UpdateNetworkSitePlanRequestPrivate &other, UpdateNetworkSitePlanRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
