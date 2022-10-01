// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
