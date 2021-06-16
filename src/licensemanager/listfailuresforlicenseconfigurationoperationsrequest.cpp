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

#include "listfailuresforlicenseconfigurationoperationsrequest.h"
#include "listfailuresforlicenseconfigurationoperationsrequest_p.h"
#include "listfailuresforlicenseconfigurationoperationsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsRequest
 * \brief The ListFailuresForLicenseConfigurationOperationsRequest class provides an interface for LicenseManager ListFailuresForLicenseConfigurationOperations requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listFailuresForLicenseConfigurationOperations
 */

/*!
 * Constructs a copy of \a other.
 */
ListFailuresForLicenseConfigurationOperationsRequest::ListFailuresForLicenseConfigurationOperationsRequest(const ListFailuresForLicenseConfigurationOperationsRequest &other)
    : LicenseManagerRequest(new ListFailuresForLicenseConfigurationOperationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsRequest object.
 */
ListFailuresForLicenseConfigurationOperationsRequest::ListFailuresForLicenseConfigurationOperationsRequest()
    : LicenseManagerRequest(new ListFailuresForLicenseConfigurationOperationsRequestPrivate(LicenseManagerRequest::ListFailuresForLicenseConfigurationOperationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFailuresForLicenseConfigurationOperationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFailuresForLicenseConfigurationOperationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFailuresForLicenseConfigurationOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListFailuresForLicenseConfigurationOperationsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsRequestPrivate
 * \brief The ListFailuresForLicenseConfigurationOperationsRequestPrivate class provides private implementation for ListFailuresForLicenseConfigurationOperationsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListFailuresForLicenseConfigurationOperationsRequestPrivate::ListFailuresForLicenseConfigurationOperationsRequestPrivate(
    const LicenseManagerRequest::Action action, ListFailuresForLicenseConfigurationOperationsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFailuresForLicenseConfigurationOperationsRequest
 * class' copy constructor.
 */
ListFailuresForLicenseConfigurationOperationsRequestPrivate::ListFailuresForLicenseConfigurationOperationsRequestPrivate(
    const ListFailuresForLicenseConfigurationOperationsRequestPrivate &other, ListFailuresForLicenseConfigurationOperationsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
