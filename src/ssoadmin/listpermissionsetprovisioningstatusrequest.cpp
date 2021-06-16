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

#include "listpermissionsetprovisioningstatusrequest.h"
#include "listpermissionsetprovisioningstatusrequest_p.h"
#include "listpermissionsetprovisioningstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetProvisioningStatusRequest
 * \brief The ListPermissionSetProvisioningStatusRequest class provides an interface for SSOAdmin ListPermissionSetProvisioningStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSetProvisioningStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionSetProvisioningStatusRequest::ListPermissionSetProvisioningStatusRequest(const ListPermissionSetProvisioningStatusRequest &other)
    : SSOAdminRequest(new ListPermissionSetProvisioningStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionSetProvisioningStatusRequest object.
 */
ListPermissionSetProvisioningStatusRequest::ListPermissionSetProvisioningStatusRequest()
    : SSOAdminRequest(new ListPermissionSetProvisioningStatusRequestPrivate(SSOAdminRequest::ListPermissionSetProvisioningStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionSetProvisioningStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionSetProvisioningStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionSetProvisioningStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionSetProvisioningStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetProvisioningStatusRequestPrivate
 * \brief The ListPermissionSetProvisioningStatusRequestPrivate class provides private implementation for ListPermissionSetProvisioningStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetProvisioningStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListPermissionSetProvisioningStatusRequestPrivate::ListPermissionSetProvisioningStatusRequestPrivate(
    const SSOAdminRequest::Action action, ListPermissionSetProvisioningStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionSetProvisioningStatusRequest
 * class' copy constructor.
 */
ListPermissionSetProvisioningStatusRequestPrivate::ListPermissionSetProvisioningStatusRequestPrivate(
    const ListPermissionSetProvisioningStatusRequestPrivate &other, ListPermissionSetProvisioningStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
