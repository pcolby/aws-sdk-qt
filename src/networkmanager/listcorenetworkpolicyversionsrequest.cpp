// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcorenetworkpolicyversionsrequest.h"
#include "listcorenetworkpolicyversionsrequest_p.h"
#include "listcorenetworkpolicyversionsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListCoreNetworkPolicyVersionsRequest
 * \brief The ListCoreNetworkPolicyVersionsRequest class provides an interface for NetworkManager ListCoreNetworkPolicyVersions requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listCoreNetworkPolicyVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoreNetworkPolicyVersionsRequest::ListCoreNetworkPolicyVersionsRequest(const ListCoreNetworkPolicyVersionsRequest &other)
    : NetworkManagerRequest(new ListCoreNetworkPolicyVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoreNetworkPolicyVersionsRequest object.
 */
ListCoreNetworkPolicyVersionsRequest::ListCoreNetworkPolicyVersionsRequest()
    : NetworkManagerRequest(new ListCoreNetworkPolicyVersionsRequestPrivate(NetworkManagerRequest::ListCoreNetworkPolicyVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoreNetworkPolicyVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoreNetworkPolicyVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreNetworkPolicyVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreNetworkPolicyVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListCoreNetworkPolicyVersionsRequestPrivate
 * \brief The ListCoreNetworkPolicyVersionsRequestPrivate class provides private implementation for ListCoreNetworkPolicyVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListCoreNetworkPolicyVersionsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListCoreNetworkPolicyVersionsRequestPrivate::ListCoreNetworkPolicyVersionsRequestPrivate(
    const NetworkManagerRequest::Action action, ListCoreNetworkPolicyVersionsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoreNetworkPolicyVersionsRequest
 * class' copy constructor.
 */
ListCoreNetworkPolicyVersionsRequestPrivate::ListCoreNetworkPolicyVersionsRequestPrivate(
    const ListCoreNetworkPolicyVersionsRequestPrivate &other, ListCoreNetworkPolicyVersionsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
