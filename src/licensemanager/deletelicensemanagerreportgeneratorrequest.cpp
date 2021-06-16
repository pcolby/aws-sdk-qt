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

#include "deletelicensemanagerreportgeneratorrequest.h"
#include "deletelicensemanagerreportgeneratorrequest_p.h"
#include "deletelicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorRequest
 * \brief The DeleteLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager DeleteLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLicenseManagerReportGeneratorRequest::DeleteLicenseManagerReportGeneratorRequest(const DeleteLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new DeleteLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorRequest object.
 */
DeleteLicenseManagerReportGeneratorRequest::DeleteLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new DeleteLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::DeleteLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseManagerReportGeneratorRequestPrivate
 * \brief The DeleteLicenseManagerReportGeneratorRequestPrivate class provides private implementation for DeleteLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteLicenseManagerReportGeneratorRequestPrivate::DeleteLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
DeleteLicenseManagerReportGeneratorRequestPrivate::DeleteLicenseManagerReportGeneratorRequestPrivate(
    const DeleteLicenseManagerReportGeneratorRequestPrivate &other, DeleteLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
