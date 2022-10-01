// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
