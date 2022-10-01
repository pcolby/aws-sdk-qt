// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlinksrequest.h"
#include "getlinksrequest_p.h"
#include "getlinksresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinksRequest
 * \brief The GetLinksRequest class provides an interface for NetworkManager GetLinks requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getLinks
 */

/*!
 * Constructs a copy of \a other.
 */
GetLinksRequest::GetLinksRequest(const GetLinksRequest &other)
    : NetworkManagerRequest(new GetLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLinksRequest object.
 */
GetLinksRequest::GetLinksRequest()
    : NetworkManagerRequest(new GetLinksRequestPrivate(NetworkManagerRequest::GetLinksAction, this))
{

}

/*!
 * \reimp
 */
bool GetLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLinksRequest::response(QNetworkReply * const reply) const
{
    return new GetLinksResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetLinksRequestPrivate
 * \brief The GetLinksRequestPrivate class provides private implementation for GetLinksRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinksRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetLinksRequestPrivate::GetLinksRequestPrivate(
    const NetworkManagerRequest::Action action, GetLinksRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLinksRequest
 * class' copy constructor.
 */
GetLinksRequestPrivate::GetLinksRequestPrivate(
    const GetLinksRequestPrivate &other, GetLinksRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
