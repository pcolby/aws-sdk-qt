// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsitesrequest.h"
#include "getsitesrequest_p.h"
#include "getsitesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSitesRequest
 * \brief The GetSitesRequest class provides an interface for NetworkManager GetSites requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getSites
 */

/*!
 * Constructs a copy of \a other.
 */
GetSitesRequest::GetSitesRequest(const GetSitesRequest &other)
    : NetworkManagerRequest(new GetSitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSitesRequest object.
 */
GetSitesRequest::GetSitesRequest()
    : NetworkManagerRequest(new GetSitesRequestPrivate(NetworkManagerRequest::GetSitesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSitesRequest::response(QNetworkReply * const reply) const
{
    return new GetSitesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetSitesRequestPrivate
 * \brief The GetSitesRequestPrivate class provides private implementation for GetSitesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSitesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetSitesRequestPrivate::GetSitesRequestPrivate(
    const NetworkManagerRequest::Action action, GetSitesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSitesRequest
 * class' copy constructor.
 */
GetSitesRequestPrivate::GetSitesRequestPrivate(
    const GetSitesRequestPrivate &other, GetSitesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
