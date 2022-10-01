// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesstokenrequest.h"
#include "getaccesstokenrequest_p.h"
#include "getaccesstokenresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetAccessTokenRequest
 * \brief The GetAccessTokenRequest class provides an interface for LicenseManager GetAccessToken requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getAccessToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessTokenRequest::GetAccessTokenRequest(const GetAccessTokenRequest &other)
    : LicenseManagerRequest(new GetAccessTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessTokenRequest object.
 */
GetAccessTokenRequest::GetAccessTokenRequest()
    : LicenseManagerRequest(new GetAccessTokenRequestPrivate(LicenseManagerRequest::GetAccessTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessTokenResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetAccessTokenRequestPrivate
 * \brief The GetAccessTokenRequestPrivate class provides private implementation for GetAccessTokenRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetAccessTokenRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetAccessTokenRequestPrivate::GetAccessTokenRequestPrivate(
    const LicenseManagerRequest::Action action, GetAccessTokenRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessTokenRequest
 * class' copy constructor.
 */
GetAccessTokenRequestPrivate::GetAccessTokenRequestPrivate(
    const GetAccessTokenRequestPrivate &other, GetAccessTokenRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
