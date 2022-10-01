// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkoutlicenserequest.h"
#include "checkoutlicenserequest_p.h"
#include "checkoutlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseRequest
 * \brief The CheckoutLicenseRequest class provides an interface for LicenseManager CheckoutLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkoutLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CheckoutLicenseRequest::CheckoutLicenseRequest(const CheckoutLicenseRequest &other)
    : LicenseManagerRequest(new CheckoutLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckoutLicenseRequest object.
 */
CheckoutLicenseRequest::CheckoutLicenseRequest()
    : LicenseManagerRequest(new CheckoutLicenseRequestPrivate(LicenseManagerRequest::CheckoutLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CheckoutLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckoutLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckoutLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CheckoutLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseRequestPrivate
 * \brief The CheckoutLicenseRequestPrivate class provides private implementation for CheckoutLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckoutLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CheckoutLicenseRequestPrivate::CheckoutLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CheckoutLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckoutLicenseRequest
 * class' copy constructor.
 */
CheckoutLicenseRequestPrivate::CheckoutLicenseRequestPrivate(
    const CheckoutLicenseRequestPrivate &other, CheckoutLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
