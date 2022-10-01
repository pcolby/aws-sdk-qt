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

#include "listlicenseconversiontasksrequest.h"
#include "listlicenseconversiontasksrequest_p.h"
#include "listlicenseconversiontasksresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksRequest
 * \brief The ListLicenseConversionTasksRequest class provides an interface for LicenseManager ListLicenseConversionTasks requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseConversionTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseConversionTasksRequest::ListLicenseConversionTasksRequest(const ListLicenseConversionTasksRequest &other)
    : LicenseManagerRequest(new ListLicenseConversionTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseConversionTasksRequest object.
 */
ListLicenseConversionTasksRequest::ListLicenseConversionTasksRequest()
    : LicenseManagerRequest(new ListLicenseConversionTasksRequestPrivate(LicenseManagerRequest::ListLicenseConversionTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseConversionTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseConversionTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseConversionTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseConversionTasksResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksRequestPrivate
 * \brief The ListLicenseConversionTasksRequestPrivate class provides private implementation for ListLicenseConversionTasksRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseConversionTasksRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseConversionTasksRequestPrivate::ListLicenseConversionTasksRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseConversionTasksRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseConversionTasksRequest
 * class' copy constructor.
 */
ListLicenseConversionTasksRequestPrivate::ListLicenseConversionTasksRequestPrivate(
    const ListLicenseConversionTasksRequestPrivate &other, ListLicenseConversionTasksRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
