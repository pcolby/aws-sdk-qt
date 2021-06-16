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

#include "listlicenseversionsrequest.h"
#include "listlicenseversionsrequest_p.h"
#include "listlicenseversionsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsRequest
 * \brief The ListLicenseVersionsRequest class provides an interface for LicenseManager ListLicenseVersions requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listLicenseVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseVersionsRequest::ListLicenseVersionsRequest(const ListLicenseVersionsRequest &other)
    : LicenseManagerRequest(new ListLicenseVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseVersionsRequest object.
 */
ListLicenseVersionsRequest::ListLicenseVersionsRequest()
    : LicenseManagerRequest(new ListLicenseVersionsRequestPrivate(LicenseManagerRequest::ListLicenseVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsRequestPrivate
 * \brief The ListLicenseVersionsRequestPrivate class provides private implementation for ListLicenseVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseVersionsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseVersionsRequestPrivate::ListLicenseVersionsRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseVersionsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseVersionsRequest
 * class' copy constructor.
 */
ListLicenseVersionsRequestPrivate::ListLicenseVersionsRequestPrivate(
    const ListLicenseVersionsRequestPrivate &other, ListLicenseVersionsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
