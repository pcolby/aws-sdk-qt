// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
