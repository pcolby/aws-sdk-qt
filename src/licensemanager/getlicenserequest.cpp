// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
