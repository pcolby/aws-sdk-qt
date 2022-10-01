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

#include "checkinlicenserequest.h"
#include "checkinlicenserequest_p.h"
#include "checkinlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckInLicenseRequest
 * \brief The CheckInLicenseRequest class provides an interface for LicenseManager CheckInLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkInLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CheckInLicenseRequest::CheckInLicenseRequest(const CheckInLicenseRequest &other)
    : LicenseManagerRequest(new CheckInLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckInLicenseRequest object.
 */
CheckInLicenseRequest::CheckInLicenseRequest()
    : LicenseManagerRequest(new CheckInLicenseRequestPrivate(LicenseManagerRequest::CheckInLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CheckInLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckInLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckInLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CheckInLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CheckInLicenseRequestPrivate
 * \brief The CheckInLicenseRequestPrivate class provides private implementation for CheckInLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckInLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CheckInLicenseRequestPrivate::CheckInLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CheckInLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckInLicenseRequest
 * class' copy constructor.
 */
CheckInLicenseRequestPrivate::CheckInLicenseRequestPrivate(
    const CheckInLicenseRequestPrivate &other, CheckInLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
