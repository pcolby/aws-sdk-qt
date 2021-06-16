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

#include "updatelicenseconfigurationrequest.h"
#include "updatelicenseconfigurationrequest_p.h"
#include "updatelicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseConfigurationRequest
 * \brief The UpdateLicenseConfigurationRequest class provides an interface for LicenseManager UpdateLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::updateLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLicenseConfigurationRequest::UpdateLicenseConfigurationRequest(const UpdateLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new UpdateLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLicenseConfigurationRequest object.
 */
UpdateLicenseConfigurationRequest::UpdateLicenseConfigurationRequest()
    : LicenseManagerRequest(new UpdateLicenseConfigurationRequestPrivate(LicenseManagerRequest::UpdateLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseConfigurationRequestPrivate
 * \brief The UpdateLicenseConfigurationRequestPrivate class provides private implementation for UpdateLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateLicenseConfigurationRequestPrivate::UpdateLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLicenseConfigurationRequest
 * class' copy constructor.
 */
UpdateLicenseConfigurationRequestPrivate::UpdateLicenseConfigurationRequestPrivate(
    const UpdateLicenseConfigurationRequestPrivate &other, UpdateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
