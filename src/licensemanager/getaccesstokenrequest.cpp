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
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
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
