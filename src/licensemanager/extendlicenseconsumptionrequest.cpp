// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "extendlicenseconsumptionrequest.h"
#include "extendlicenseconsumptionrequest_p.h"
#include "extendlicenseconsumptionresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ExtendLicenseConsumptionRequest
 * \brief The ExtendLicenseConsumptionRequest class provides an interface for LicenseManager ExtendLicenseConsumption requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::extendLicenseConsumption
 */

/*!
 * Constructs a copy of \a other.
 */
ExtendLicenseConsumptionRequest::ExtendLicenseConsumptionRequest(const ExtendLicenseConsumptionRequest &other)
    : LicenseManagerRequest(new ExtendLicenseConsumptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExtendLicenseConsumptionRequest object.
 */
ExtendLicenseConsumptionRequest::ExtendLicenseConsumptionRequest()
    : LicenseManagerRequest(new ExtendLicenseConsumptionRequestPrivate(LicenseManagerRequest::ExtendLicenseConsumptionAction, this))
{

}

/*!
 * \reimp
 */
bool ExtendLicenseConsumptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExtendLicenseConsumptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExtendLicenseConsumptionRequest::response(QNetworkReply * const reply) const
{
    return new ExtendLicenseConsumptionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::ExtendLicenseConsumptionRequestPrivate
 * \brief The ExtendLicenseConsumptionRequestPrivate class provides private implementation for ExtendLicenseConsumptionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ExtendLicenseConsumptionRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
ExtendLicenseConsumptionRequestPrivate::ExtendLicenseConsumptionRequestPrivate(
    const LicenseManagerRequest::Action action, ExtendLicenseConsumptionRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExtendLicenseConsumptionRequest
 * class' copy constructor.
 */
ExtendLicenseConsumptionRequestPrivate::ExtendLicenseConsumptionRequestPrivate(
    const ExtendLicenseConsumptionRequestPrivate &other, ExtendLicenseConsumptionRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
