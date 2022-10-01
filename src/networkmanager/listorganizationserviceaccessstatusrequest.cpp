// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listorganizationserviceaccessstatusrequest.h"
#include "listorganizationserviceaccessstatusrequest_p.h"
#include "listorganizationserviceaccessstatusresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListOrganizationServiceAccessStatusRequest
 * \brief The ListOrganizationServiceAccessStatusRequest class provides an interface for NetworkManager ListOrganizationServiceAccessStatus requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listOrganizationServiceAccessStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrganizationServiceAccessStatusRequest::ListOrganizationServiceAccessStatusRequest(const ListOrganizationServiceAccessStatusRequest &other)
    : NetworkManagerRequest(new ListOrganizationServiceAccessStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrganizationServiceAccessStatusRequest object.
 */
ListOrganizationServiceAccessStatusRequest::ListOrganizationServiceAccessStatusRequest()
    : NetworkManagerRequest(new ListOrganizationServiceAccessStatusRequestPrivate(NetworkManagerRequest::ListOrganizationServiceAccessStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrganizationServiceAccessStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrganizationServiceAccessStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrganizationServiceAccessStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationServiceAccessStatusResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListOrganizationServiceAccessStatusRequestPrivate
 * \brief The ListOrganizationServiceAccessStatusRequestPrivate class provides private implementation for ListOrganizationServiceAccessStatusRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListOrganizationServiceAccessStatusRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListOrganizationServiceAccessStatusRequestPrivate::ListOrganizationServiceAccessStatusRequestPrivate(
    const NetworkManagerRequest::Action action, ListOrganizationServiceAccessStatusRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationServiceAccessStatusRequest
 * class' copy constructor.
 */
ListOrganizationServiceAccessStatusRequestPrivate::ListOrganizationServiceAccessStatusRequestPrivate(
    const ListOrganizationServiceAccessStatusRequestPrivate &other, ListOrganizationServiceAccessStatusRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
