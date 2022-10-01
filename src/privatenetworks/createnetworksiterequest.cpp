// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworksiterequest.h"
#include "createnetworksiterequest_p.h"
#include "createnetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteRequest
 * \brief The CreateNetworkSiteRequest class provides an interface for PrivateNetworks CreateNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkSiteRequest::CreateNetworkSiteRequest(const CreateNetworkSiteRequest &other)
    : PrivateNetworksRequest(new CreateNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkSiteRequest object.
 */
CreateNetworkSiteRequest::CreateNetworkSiteRequest()
    : PrivateNetworksRequest(new CreateNetworkSiteRequestPrivate(PrivateNetworksRequest::CreateNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteRequestPrivate
 * \brief The CreateNetworkSiteRequestPrivate class provides private implementation for CreateNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
CreateNetworkSiteRequestPrivate::CreateNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, CreateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkSiteRequest
 * class' copy constructor.
 */
CreateNetworkSiteRequestPrivate::CreateNetworkSiteRequestPrivate(
    const CreateNetworkSiteRequestPrivate &other, CreateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
