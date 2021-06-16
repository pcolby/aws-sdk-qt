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

#include "createlicenseconfigurationrequest.h"
#include "createlicenseconfigurationrequest_p.h"
#include "createlicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationRequest
 * \brief The CreateLicenseConfigurationRequest class provides an interface for LicenseManager CreateLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseConfigurationRequest::CreateLicenseConfigurationRequest(const CreateLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new CreateLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseConfigurationRequest object.
 */
CreateLicenseConfigurationRequest::CreateLicenseConfigurationRequest()
    : LicenseManagerRequest(new CreateLicenseConfigurationRequestPrivate(LicenseManagerRequest::CreateLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationRequestPrivate
 * \brief The CreateLicenseConfigurationRequestPrivate class provides private implementation for CreateLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseConfigurationRequestPrivate::CreateLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseConfigurationRequest
 * class' copy constructor.
 */
CreateLicenseConfigurationRequestPrivate::CreateLicenseConfigurationRequestPrivate(
    const CreateLicenseConfigurationRequestPrivate &other, CreateLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
