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

#include "listlicensemanagerreportgeneratorsrequest.h"
#include "listlicensemanagerreportgeneratorsrequest_p.h"
#include "listlicensemanagerreportgeneratorsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsRequest
 * \brief The ListLicenseManagerReportGeneratorsRequest class provides an interface for LicenseManager ListLicenseManagerReportGenerators requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listLicenseManagerReportGenerators
 */

/*!
 * Constructs a copy of \a other.
 */
ListLicenseManagerReportGeneratorsRequest::ListLicenseManagerReportGeneratorsRequest(const ListLicenseManagerReportGeneratorsRequest &other)
    : LicenseManagerRequest(new ListLicenseManagerReportGeneratorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLicenseManagerReportGeneratorsRequest object.
 */
ListLicenseManagerReportGeneratorsRequest::ListLicenseManagerReportGeneratorsRequest()
    : LicenseManagerRequest(new ListLicenseManagerReportGeneratorsRequestPrivate(LicenseManagerRequest::ListLicenseManagerReportGeneratorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLicenseManagerReportGeneratorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLicenseManagerReportGeneratorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLicenseManagerReportGeneratorsRequest::response(QNetworkReply * const reply) const
{
    return new ListLicenseManagerReportGeneratorsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsRequestPrivate
 * \brief The ListLicenseManagerReportGeneratorsRequestPrivate class provides private implementation for ListLicenseManagerReportGeneratorsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseManagerReportGeneratorsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ListLicenseManagerReportGeneratorsRequestPrivate::ListLicenseManagerReportGeneratorsRequestPrivate(
    const LicenseManagerRequest::Action action, ListLicenseManagerReportGeneratorsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLicenseManagerReportGeneratorsRequest
 * class' copy constructor.
 */
ListLicenseManagerReportGeneratorsRequestPrivate::ListLicenseManagerReportGeneratorsRequestPrivate(
    const ListLicenseManagerReportGeneratorsRequestPrivate &other, ListLicenseManagerReportGeneratorsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
