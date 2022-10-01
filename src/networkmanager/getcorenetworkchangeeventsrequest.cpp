// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorenetworkchangeeventsrequest.h"
#include "getcorenetworkchangeeventsrequest_p.h"
#include "getcorenetworkchangeeventsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsRequest
 * \brief The GetCoreNetworkChangeEventsRequest class provides an interface for NetworkManager GetCoreNetworkChangeEvents requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkChangeEvents
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreNetworkChangeEventsRequest::GetCoreNetworkChangeEventsRequest(const GetCoreNetworkChangeEventsRequest &other)
    : NetworkManagerRequest(new GetCoreNetworkChangeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreNetworkChangeEventsRequest object.
 */
GetCoreNetworkChangeEventsRequest::GetCoreNetworkChangeEventsRequest()
    : NetworkManagerRequest(new GetCoreNetworkChangeEventsRequestPrivate(NetworkManagerRequest::GetCoreNetworkChangeEventsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreNetworkChangeEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreNetworkChangeEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreNetworkChangeEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreNetworkChangeEventsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsRequestPrivate
 * \brief The GetCoreNetworkChangeEventsRequestPrivate class provides private implementation for GetCoreNetworkChangeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkChangeEventsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCoreNetworkChangeEventsRequestPrivate::GetCoreNetworkChangeEventsRequestPrivate(
    const NetworkManagerRequest::Action action, GetCoreNetworkChangeEventsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreNetworkChangeEventsRequest
 * class' copy constructor.
 */
GetCoreNetworkChangeEventsRequestPrivate::GetCoreNetworkChangeEventsRequestPrivate(
    const GetCoreNetworkChangeEventsRequestPrivate &other, GetCoreNetworkChangeEventsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
