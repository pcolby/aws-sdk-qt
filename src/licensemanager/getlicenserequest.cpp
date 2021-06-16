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

#include "getlicenserequest.h"
#include "getlicenserequest_p.h"
#include "getlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseRequest
 * \brief The GetLicenseRequest class provides an interface for LicenseManager GetLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getLicense
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseRequest::GetLicenseRequest(const GetLicenseRequest &other)
    : LicenseManagerRequest(new GetLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseRequest object.
 */
GetLicenseRequest::GetLicenseRequest()
    : LicenseManagerRequest(new GetLicenseRequestPrivate(LicenseManagerRequest::GetLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseRequestPrivate
 * \brief The GetLicenseRequestPrivate class provides private implementation for GetLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseRequestPrivate::GetLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseRequest
 * class' copy constructor.
 */
GetLicenseRequestPrivate::GetLicenseRequestPrivate(
    const GetLicenseRequestPrivate &other, GetLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
