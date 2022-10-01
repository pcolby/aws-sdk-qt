// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
