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
