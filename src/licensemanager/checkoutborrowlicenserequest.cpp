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

#include "checkoutborrowlicenserequest.h"
#include "checkoutborrowlicenserequest_p.h"
#include "checkoutborrowlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckoutBorrowLicenseRequest
 * \brief The CheckoutBorrowLicenseRequest class provides an interface for LicenseManager CheckoutBorrowLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkoutBorrowLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CheckoutBorrowLicenseRequest::CheckoutBorrowLicenseRequest(const CheckoutBorrowLicenseRequest &other)
    : LicenseManagerRequest(new CheckoutBorrowLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckoutBorrowLicenseRequest object.
 */
CheckoutBorrowLicenseRequest::CheckoutBorrowLicenseRequest()
    : LicenseManagerRequest(new CheckoutBorrowLicenseRequestPrivate(LicenseManagerRequest::CheckoutBorrowLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CheckoutBorrowLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckoutBorrowLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckoutBorrowLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CheckoutBorrowLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CheckoutBorrowLicenseRequestPrivate
 * \brief The CheckoutBorrowLicenseRequestPrivate class provides private implementation for CheckoutBorrowLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckoutBorrowLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CheckoutBorrowLicenseRequestPrivate::CheckoutBorrowLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CheckoutBorrowLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckoutBorrowLicenseRequest
 * class' copy constructor.
 */
CheckoutBorrowLicenseRequestPrivate::CheckoutBorrowLicenseRequestPrivate(
    const CheckoutBorrowLicenseRequestPrivate &other, CheckoutBorrowLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
