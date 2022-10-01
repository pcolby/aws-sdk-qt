// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
