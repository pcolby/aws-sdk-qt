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

#include "startorganizationserviceaccessupdaterequest.h"
#include "startorganizationserviceaccessupdaterequest_p.h"
#include "startorganizationserviceaccessupdateresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::StartOrganizationServiceAccessUpdateRequest
 * \brief The StartOrganizationServiceAccessUpdateRequest class provides an interface for NetworkManager StartOrganizationServiceAccessUpdate requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::startOrganizationServiceAccessUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
StartOrganizationServiceAccessUpdateRequest::StartOrganizationServiceAccessUpdateRequest(const StartOrganizationServiceAccessUpdateRequest &other)
    : NetworkManagerRequest(new StartOrganizationServiceAccessUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartOrganizationServiceAccessUpdateRequest object.
 */
StartOrganizationServiceAccessUpdateRequest::StartOrganizationServiceAccessUpdateRequest()
    : NetworkManagerRequest(new StartOrganizationServiceAccessUpdateRequestPrivate(NetworkManagerRequest::StartOrganizationServiceAccessUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool StartOrganizationServiceAccessUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartOrganizationServiceAccessUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOrganizationServiceAccessUpdateRequest::response(QNetworkReply * const reply) const
{
    return new StartOrganizationServiceAccessUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::StartOrganizationServiceAccessUpdateRequestPrivate
 * \brief The StartOrganizationServiceAccessUpdateRequestPrivate class provides private implementation for StartOrganizationServiceAccessUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a StartOrganizationServiceAccessUpdateRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
StartOrganizationServiceAccessUpdateRequestPrivate::StartOrganizationServiceAccessUpdateRequestPrivate(
    const NetworkManagerRequest::Action action, StartOrganizationServiceAccessUpdateRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartOrganizationServiceAccessUpdateRequest
 * class' copy constructor.
 */
StartOrganizationServiceAccessUpdateRequestPrivate::StartOrganizationServiceAccessUpdateRequestPrivate(
    const StartOrganizationServiceAccessUpdateRequestPrivate &other, StartOrganizationServiceAccessUpdateRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
