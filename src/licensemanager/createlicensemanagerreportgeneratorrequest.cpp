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

#include "createlicensemanagerreportgeneratorrequest.h"
#include "createlicensemanagerreportgeneratorrequest_p.h"
#include "createlicensemanagerreportgeneratorresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorRequest
 * \brief The CreateLicenseManagerReportGeneratorRequest class provides an interface for LicenseManager CreateLicenseManagerReportGenerator requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createLicenseManagerReportGenerator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseManagerReportGeneratorRequest::CreateLicenseManagerReportGeneratorRequest(const CreateLicenseManagerReportGeneratorRequest &other)
    : LicenseManagerRequest(new CreateLicenseManagerReportGeneratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseManagerReportGeneratorRequest object.
 */
CreateLicenseManagerReportGeneratorRequest::CreateLicenseManagerReportGeneratorRequest()
    : LicenseManagerRequest(new CreateLicenseManagerReportGeneratorRequestPrivate(LicenseManagerRequest::CreateLicenseManagerReportGeneratorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseManagerReportGeneratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseManagerReportGeneratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseManagerReportGeneratorRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseManagerReportGeneratorResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseManagerReportGeneratorRequestPrivate
 * \brief The CreateLicenseManagerReportGeneratorRequestPrivate class provides private implementation for CreateLicenseManagerReportGeneratorRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseManagerReportGeneratorRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseManagerReportGeneratorRequestPrivate::CreateLicenseManagerReportGeneratorRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseManagerReportGeneratorRequest
 * class' copy constructor.
 */
CreateLicenseManagerReportGeneratorRequestPrivate::CreateLicenseManagerReportGeneratorRequestPrivate(
    const CreateLicenseManagerReportGeneratorRequestPrivate &other, CreateLicenseManagerReportGeneratorRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
