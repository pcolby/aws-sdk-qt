// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicensesrequest.h"
#include "listlicensesrequest_p.h"
#include "listlicensesresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicensesRequest
 * \brief The ListLicensesRequest class provides an interface for LicenseManager ListLicenses requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenses
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicensesRequest::ListLicensesRequest(const ListLicensesRequest &other)
    : LicenseManagerRequest(new ListLicensesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicensesRequest object.
 */
ListLicensesRequest::ListLicensesRequest()
    : LicenseManagerRequest(new ListLicensesRequestPrivate(LicenseManagerRequest::ListLicensesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicensesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicensesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicensesRequest::response(QNetworkReply * const reply) const
{
    return new ListLicensesResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicensesRequestPrivate
 * \brief The ListLicensesRequestPrivate class provides private implementation for ListLicensesRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicensesRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicensesRequestPrivate::ListLicensesRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicensesRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicensesRequest
 * class' copy constructor.
 */
ListLicensesRequestPrivate::ListLicensesRequestPrivate(
    const ListLicensesRequestPrivate &other, ListLicensesRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
