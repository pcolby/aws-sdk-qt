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

#include "listassociationsforlicenseconfigurationrequest.h"
#include "listassociationsforlicenseconfigurationrequest_p.h"
#include "listassociationsforlicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationRequest
 * \brief The ListAssociationsForLicenseConfigurationRequest class provides an interface for LicenseManager ListAssociationsForLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listAssociationsForLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociationsForLicenseConfigurationRequest::ListAssociationsForLicenseConfigurationRequest(const ListAssociationsForLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new ListAssociationsForLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociationsForLicenseConfigurationRequest object.
 */
ListAssociationsForLicenseConfigurationRequest::ListAssociationsForLicenseConfigurationRequest()
    : LicenseManagerRequest(new ListAssociationsForLicenseConfigurationRequestPrivate(LicenseManagerRequest::ListAssociationsForLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociationsForLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociationsForLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociationsForLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociationsForLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationRequestPrivate
 * \brief The ListAssociationsForLicenseConfigurationRequestPrivate class provides private implementation for ListAssociationsForLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListAssociationsForLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListAssociationsForLicenseConfigurationRequestPrivate::ListAssociationsForLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, ListAssociationsForLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociationsForLicenseConfigurationRequest
 * class' copy constructor.
 */
ListAssociationsForLicenseConfigurationRequestPrivate::ListAssociationsForLicenseConfigurationRequestPrivate(
    const ListAssociationsForLicenseConfigurationRequestPrivate &other, ListAssociationsForLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
