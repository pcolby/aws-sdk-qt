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

#include "listdistributedgrantsrequest.h"
#include "listdistributedgrantsrequest_p.h"
#include "listdistributedgrantsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsRequest
 * \brief The ListDistributedGrantsRequest class provides an interface for LicenseManager ListDistributedGrants requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listDistributedGrants
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributedGrantsRequest::ListDistributedGrantsRequest(const ListDistributedGrantsRequest &other)
    : LicenseManagerRequest(new ListDistributedGrantsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributedGrantsRequest object.
 */
ListDistributedGrantsRequest::ListDistributedGrantsRequest()
    : LicenseManagerRequest(new ListDistributedGrantsRequestPrivate(LicenseManagerRequest::ListDistributedGrantsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributedGrantsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributedGrantsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributedGrantsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributedGrantsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsRequestPrivate
 * \brief The ListDistributedGrantsRequestPrivate class provides private implementation for ListDistributedGrantsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListDistributedGrantsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListDistributedGrantsRequestPrivate::ListDistributedGrantsRequestPrivate(
    const LicenseManagerRequest::Action action, ListDistributedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributedGrantsRequest
 * class' copy constructor.
 */
ListDistributedGrantsRequestPrivate::ListDistributedGrantsRequestPrivate(
    const ListDistributedGrantsRequestPrivate &other, ListDistributedGrantsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
