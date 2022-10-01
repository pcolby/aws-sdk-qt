// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
