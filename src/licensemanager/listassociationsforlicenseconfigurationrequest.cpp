// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
