// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorenetworkchangesetrequest.h"
#include "getcorenetworkchangesetrequest_p.h"
#include "getcorenetworkchangesetresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeSetRequest
 * \brief The GetCoreNetworkChangeSetRequest class provides an interface for NetworkManager GetCoreNetworkChangeSet requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreNetworkChangeSetRequest::GetCoreNetworkChangeSetRequest(const GetCoreNetworkChangeSetRequest &other)
    : NetworkManagerRequest(new GetCoreNetworkChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreNetworkChangeSetRequest object.
 */
GetCoreNetworkChangeSetRequest::GetCoreNetworkChangeSetRequest()
    : NetworkManagerRequest(new GetCoreNetworkChangeSetRequestPrivate(NetworkManagerRequest::GetCoreNetworkChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreNetworkChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreNetworkChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreNetworkChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreNetworkChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeSetRequestPrivate
 * \brief The GetCoreNetworkChangeSetRequestPrivate class provides private implementation for GetCoreNetworkChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkChangeSetRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCoreNetworkChangeSetRequestPrivate::GetCoreNetworkChangeSetRequestPrivate(
    const NetworkManagerRequest::Action action, GetCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreNetworkChangeSetRequest
 * class' copy constructor.
 */
GetCoreNetworkChangeSetRequestPrivate::GetCoreNetworkChangeSetRequestPrivate(
    const GetCoreNetworkChangeSetRequestPrivate &other, GetCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
