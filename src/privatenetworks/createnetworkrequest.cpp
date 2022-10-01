// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworkrequest.h"
#include "createnetworkrequest_p.h"
#include "createnetworkresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkRequest
 * \brief The CreateNetworkRequest class provides an interface for PrivateNetworks CreateNetwork requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkRequest::CreateNetworkRequest(const CreateNetworkRequest &other)
    : PrivateNetworksRequest(new CreateNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkRequest object.
 */
CreateNetworkRequest::CreateNetworkRequest()
    : PrivateNetworksRequest(new CreateNetworkRequestPrivate(PrivateNetworksRequest::CreateNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkRequestPrivate
 * \brief The CreateNetworkRequestPrivate class provides private implementation for CreateNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const PrivateNetworksRequest::Action action, CreateNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkRequest
 * class' copy constructor.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const CreateNetworkRequestPrivate &other, CreateNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
