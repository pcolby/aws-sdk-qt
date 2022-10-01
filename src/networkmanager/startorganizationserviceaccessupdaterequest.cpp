// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
