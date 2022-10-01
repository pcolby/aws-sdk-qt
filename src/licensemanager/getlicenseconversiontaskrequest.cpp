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

#include "getlicenseconversiontaskrequest.h"
#include "getlicenseconversiontaskrequest_p.h"
#include "getlicenseconversiontaskresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskRequest
 * \brief The GetLicenseConversionTaskRequest class provides an interface for LicenseManager GetLicenseConversionTask requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseConversionTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseConversionTaskRequest::GetLicenseConversionTaskRequest(const GetLicenseConversionTaskRequest &other)
    : LicenseManagerRequest(new GetLicenseConversionTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseConversionTaskRequest object.
 */
GetLicenseConversionTaskRequest::GetLicenseConversionTaskRequest()
    : LicenseManagerRequest(new GetLicenseConversionTaskRequestPrivate(LicenseManagerRequest::GetLicenseConversionTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseConversionTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseConversionTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseConversionTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseConversionTaskResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConversionTaskRequestPrivate
 * \brief The GetLicenseConversionTaskRequestPrivate class provides private implementation for GetLicenseConversionTaskRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConversionTaskRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseConversionTaskRequestPrivate::GetLicenseConversionTaskRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseConversionTaskRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseConversionTaskRequest
 * class' copy constructor.
 */
GetLicenseConversionTaskRequestPrivate::GetLicenseConversionTaskRequestPrivate(
    const GetLicenseConversionTaskRequestPrivate &other, GetLicenseConversionTaskRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
