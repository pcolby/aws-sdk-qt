// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicensespecificationsforresourcerequest.h"
#include "listlicensespecificationsforresourcerequest_p.h"
#include "listlicensespecificationsforresourceresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseSpecificationsForResourceRequest
 * \brief The ListLicenseSpecificationsForResourceRequest class provides an interface for LicenseManager ListLicenseSpecificationsForResource requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseSpecificationsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseSpecificationsForResourceRequest::ListLicenseSpecificationsForResourceRequest(const ListLicenseSpecificationsForResourceRequest &other)
    : LicenseManagerRequest(new ListLicenseSpecificationsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseSpecificationsForResourceRequest object.
 */
ListLicenseSpecificationsForResourceRequest::ListLicenseSpecificationsForResourceRequest()
    : LicenseManagerRequest(new ListLicenseSpecificationsForResourceRequestPrivate(LicenseManagerRequest::ListLicenseSpecificationsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseSpecificationsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseSpecificationsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseSpecificationsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseSpecificationsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseSpecificationsForResourceRequestPrivate
 * \brief The ListLicenseSpecificationsForResourceRequestPrivate class provides private implementation for ListLicenseSpecificationsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseSpecificationsForResourceRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseSpecificationsForResourceRequestPrivate::ListLicenseSpecificationsForResourceRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseSpecificationsForResourceRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseSpecificationsForResourceRequest
 * class' copy constructor.
 */
ListLicenseSpecificationsForResourceRequestPrivate::ListLicenseSpecificationsForResourceRequestPrivate(
    const ListLicenseSpecificationsForResourceRequestPrivate &other, ListLicenseSpecificationsForResourceRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
