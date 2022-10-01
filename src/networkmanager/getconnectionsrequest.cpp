// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionsrequest.h"
#include "getconnectionsrequest_p.h"
#include "getconnectionsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectionsRequest
 * \brief The GetConnectionsRequest class provides an interface for NetworkManager GetConnections requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnections
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionsRequest::GetConnectionsRequest(const GetConnectionsRequest &other)
    : NetworkManagerRequest(new GetConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionsRequest object.
 */
GetConnectionsRequest::GetConnectionsRequest()
    : NetworkManagerRequest(new GetConnectionsRequestPrivate(NetworkManagerRequest::GetConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectionsRequestPrivate
 * \brief The GetConnectionsRequestPrivate class provides private implementation for GetConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectionsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectionsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionsRequest
 * class' copy constructor.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GetConnectionsRequestPrivate &other, GetConnectionsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
