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

#include "getlicensemanagerreportgeneratorrequest.h"
#include "getlicensemanagerreportgeneratorrequest_p.h"
#include "getlicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorRequest
 * \brief The GetLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager GetLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseManagerReportGeneratorRequest::GetLicenseManagerReportGeneratorRequest(const GetLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new GetLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseManagerReportGeneratorRequest object.
 */
GetLicenseManagerReportGeneratorRequest::GetLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new GetLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::GetLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseManagerReportGeneratorRequestPrivate
 * \brief The GetLicenseManagerReportGeneratorRequestPrivate class provides private implementation for GetLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseManagerReportGeneratorRequestPrivate::GetLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
GetLicenseManagerReportGeneratorRequestPrivate::GetLicenseManagerReportGeneratorRequestPrivate(
    const GetLicenseManagerReportGeneratorRequestPrivate &other, GetLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
