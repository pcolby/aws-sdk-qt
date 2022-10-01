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

#include "listreceivedlicensesrequest.h"
#include "listreceivedlicensesrequest_p.h"
#include "listreceivedlicensesresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesRequest
 * \brief The ListReceivedLicensesRequest class provides an interface for LicenseManager ListReceivedLicenses requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listReceivedLicenses
 */

/*!
 * Constructs a copy of \a other.
 */
ListReceivedLicensesRequest::ListReceivedLicensesRequest(const ListReceivedLicensesRequest &other)
    : LicenseManagerRequest(new ListReceivedLicensesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReceivedLicensesRequest object.
 */
ListReceivedLicensesRequest::ListReceivedLicensesRequest()
    : LicenseManagerRequest(new ListReceivedLicensesRequestPrivate(LicenseManagerRequest::ListReceivedLicensesAction, this))
{

}

/*!
 * \reimp
 */
bool ListReceivedLicensesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReceivedLicensesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReceivedLicensesRequest::response(QNetworkReply * const reply) const
{
    return new ListReceivedLicensesResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesRequestPrivate
 * \brief The ListReceivedLicensesRequestPrivate class provides private implementation for ListReceivedLicensesRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedLicensesRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListReceivedLicensesRequestPrivate::ListReceivedLicensesRequestPrivate(
    const LicenseManagerRequest::Action action, ListReceivedLicensesRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReceivedLicensesRequest
 * class' copy constructor.
 */
ListReceivedLicensesRequestPrivate::ListReceivedLicensesRequestPrivate(
    const ListReceivedLicensesRequestPrivate &other, ListReceivedLicensesRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
