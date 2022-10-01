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

#include "getlicenseusagerequest.h"
#include "getlicenseusagerequest_p.h"
#include "getlicenseusageresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageRequest
 * \brief The GetLicenseUsageRequest class provides an interface for LicenseManager GetLicenseUsage requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getLicenseUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetLicenseUsageRequest::GetLicenseUsageRequest(const GetLicenseUsageRequest &other)
    : LicenseManagerRequest(new GetLicenseUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLicenseUsageRequest object.
 */
GetLicenseUsageRequest::GetLicenseUsageRequest()
    : LicenseManagerRequest(new GetLicenseUsageRequestPrivate(LicenseManagerRequest::GetLicenseUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetLicenseUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLicenseUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLicenseUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetLicenseUsageResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetLicenseUsageRequestPrivate
 * \brief The GetLicenseUsageRequestPrivate class provides private implementation for GetLicenseUsageRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseUsageRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetLicenseUsageRequestPrivate::GetLicenseUsageRequestPrivate(
    const LicenseManagerRequest::Action action, GetLicenseUsageRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLicenseUsageRequest
 * class' copy constructor.
 */
GetLicenseUsageRequestPrivate::GetLicenseUsageRequestPrivate(
    const GetLicenseUsageRequestPrivate &other, GetLicenseUsageRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
