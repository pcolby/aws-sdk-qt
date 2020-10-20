/*
    Copyright 2013-2020 Paul Colby

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

#include "deletelicenseconfigurationrequest.h"
#include "deletelicenseconfigurationrequest_p.h"
#include "deletelicenseconfigurationresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationRequest
 * \brief The DeleteLicenseConfigurationRequest class provides an interface for LicenseManager DeleteLicenseConfiguration requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  <i>This is the AWS License Manager API Reference.</i> It provides descriptions, syntax, and usage examples for each of
 *  the actions and data types for License Manager. The topic for each action shows the Query API request parameters and the
 *  XML response. You can also view the XML request elements in the WSDL.
 * 
 *  </p
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 *
 * \sa LicenseManagerClient::deleteLicenseConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLicenseConfigurationRequest::DeleteLicenseConfigurationRequest(const DeleteLicenseConfigurationRequest &other)
    : LicenseManagerRequest(new DeleteLicenseConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLicenseConfigurationRequest object.
 */
DeleteLicenseConfigurationRequest::DeleteLicenseConfigurationRequest()
    : LicenseManagerRequest(new DeleteLicenseConfigurationRequestPrivate(LicenseManagerRequest::DeleteLicenseConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLicenseConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLicenseConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLicenseConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLicenseConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationRequestPrivate
 * \brief The DeleteLicenseConfigurationRequestPrivate class provides private implementation for DeleteLicenseConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseConfigurationRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteLicenseConfigurationRequestPrivate::DeleteLicenseConfigurationRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLicenseConfigurationRequest
 * class' copy constructor.
 */
DeleteLicenseConfigurationRequestPrivate::DeleteLicenseConfigurationRequestPrivate(
    const DeleteLicenseConfigurationRequestPrivate &other, DeleteLicenseConfigurationRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
