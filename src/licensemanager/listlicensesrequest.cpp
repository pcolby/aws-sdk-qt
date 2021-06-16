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
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
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
