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

#include "listresourceinventoryrequest.h"
#include "listresourceinventoryrequest_p.h"
#include "listresourceinventoryresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryRequest
 * \brief The ListResourceInventoryRequest class provides an interface for LicenseManager ListResourceInventory requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listResourceInventory
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceInventoryRequest::ListResourceInventoryRequest(const ListResourceInventoryRequest &other)
    : LicenseManagerRequest(new ListResourceInventoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceInventoryRequest object.
 */
ListResourceInventoryRequest::ListResourceInventoryRequest()
    : LicenseManagerRequest(new ListResourceInventoryRequestPrivate(LicenseManagerRequest::ListResourceInventoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceInventoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceInventoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceInventoryRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceInventoryResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryRequestPrivate
 * \brief The ListResourceInventoryRequestPrivate class provides private implementation for ListResourceInventoryRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListResourceInventoryRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListResourceInventoryRequestPrivate::ListResourceInventoryRequestPrivate(
    const LicenseManagerRequest::Action action, ListResourceInventoryRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceInventoryRequest
 * class' copy constructor.
 */
ListResourceInventoryRequestPrivate::ListResourceInventoryRequestPrivate(
    const ListResourceInventoryRequestPrivate &other, ListResourceInventoryRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
