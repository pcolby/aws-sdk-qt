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

#include "listtokensrequest.h"
#include "listtokensrequest_p.h"
#include "listtokensresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListTokensRequest
 * \brief The ListTokensRequest class provides an interface for LicenseManager ListTokens requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listTokens
 */

/*!
 * Constructs a copy of \a other.
 */
ListTokensRequest::ListTokensRequest(const ListTokensRequest &other)
    : LicenseManagerRequest(new ListTokensRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTokensRequest object.
 */
ListTokensRequest::ListTokensRequest()
    : LicenseManagerRequest(new ListTokensRequestPrivate(LicenseManagerRequest::ListTokensAction, this))
{

}

/*!
 * \reimp
 */
bool ListTokensRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTokensResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTokensRequest::response(QNetworkReply * const reply) const
{
    return new ListTokensResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListTokensRequestPrivate
 * \brief The ListTokensRequestPrivate class provides private implementation for ListTokensRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListTokensRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListTokensRequestPrivate::ListTokensRequestPrivate(
    const LicenseManagerRequest::Action action, ListTokensRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTokensRequest
 * class' copy constructor.
 */
ListTokensRequestPrivate::ListTokensRequestPrivate(
    const ListTokensRequestPrivate &other, ListTokensRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
