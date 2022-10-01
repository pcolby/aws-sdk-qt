/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesiterequest.h"
#include "updatesiterequest_p.h"
#include "updatesiteresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateSiteRequest
 * \brief The UpdateSiteRequest class provides an interface for NetworkManager UpdateSite requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateSite
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSiteRequest::UpdateSiteRequest(const UpdateSiteRequest &other)
    : NetworkManagerRequest(new UpdateSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSiteRequest object.
 */
UpdateSiteRequest::UpdateSiteRequest()
    : NetworkManagerRequest(new UpdateSiteRequestPrivate(NetworkManagerRequest::UpdateSiteAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSiteRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSiteResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateSiteRequestPrivate
 * \brief The UpdateSiteRequestPrivate class provides private implementation for UpdateSiteRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateSiteRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateSiteRequestPrivate::UpdateSiteRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateSiteRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSiteRequest
 * class' copy constructor.
 */
UpdateSiteRequestPrivate::UpdateSiteRequestPrivate(
    const UpdateSiteRequestPrivate &other, UpdateSiteRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
