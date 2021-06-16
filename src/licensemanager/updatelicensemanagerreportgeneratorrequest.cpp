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

#include "updatelicensemanagerreportgeneratorrequest.h"
#include "updatelicensemanagerreportgeneratorrequest_p.h"
#include "updatelicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorRequest
 * \brief The UpdateLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager UpdateLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::updateLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLicenseManagerReportGeneratorRequest::UpdateLicenseManagerReportGeneratorRequest(const UpdateLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new UpdateLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorRequest object.
 */
UpdateLicenseManagerReportGeneratorRequest::UpdateLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new UpdateLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::UpdateLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseManagerReportGeneratorRequestPrivate
 * \brief The UpdateLicenseManagerReportGeneratorRequestPrivate class provides private implementation for UpdateLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateLicenseManagerReportGeneratorRequestPrivate::UpdateLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
UpdateLicenseManagerReportGeneratorRequestPrivate::UpdateLicenseManagerReportGeneratorRequestPrivate(
    const UpdateLicenseManagerReportGeneratorRequestPrivate &other, UpdateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
