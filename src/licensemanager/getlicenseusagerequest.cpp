// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
