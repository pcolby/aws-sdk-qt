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

#include "listusageforlicenseconfigurationrequest.h"
#include "listusageforlicenseconfigurationrequest_p.h"
#include "listusageforlicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationRequest
 * \brief The ListUsageForLicenseConfigurationRequest class provides an interface for LicenseManager ListUsageForLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listUsageForLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsageForLicenseConfigurationRequest::ListUsageForLicenseConfigurationRequest(const ListUsageForLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new ListUsageForLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsageForLicenseConfigurationRequest object.
 */
ListUsageForLicenseConfigurationRequest::ListUsageForLicenseConfigurationRequest()
    : LicenseManagerRequest(new ListUsageForLicenseConfigurationRequestPrivate(LicenseManagerRequest::ListUsageForLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsageForLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsageForLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsageForLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ListUsageForLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationRequestPrivate
 * \brief The ListUsageForLicenseConfigurationRequestPrivate class provides private implementation for ListUsageForLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListUsageForLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListUsageForLicenseConfigurationRequestPrivate::ListUsageForLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, ListUsageForLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsageForLicenseConfigurationRequest
 * class' copy constructor.
 */
ListUsageForLicenseConfigurationRequestPrivate::ListUsageForLicenseConfigurationRequestPrivate(
    const ListUsageForLicenseConfigurationRequestPrivate &other, ListUsageForLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
