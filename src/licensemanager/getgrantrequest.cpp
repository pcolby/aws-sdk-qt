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

#include "getgrantrequest.h"
#include "getgrantrequest_p.h"
#include "getgrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetGrantRequest
 * \brief The GetGrantRequest class provides an interface for LicenseManager GetGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::getGrant
 */

/*!
 * Constructs a copy of \a other.
 */
GetGrantRequest::GetGrantRequest(const GetGrantRequest &other)
    : LicenseManagerRequest(new GetGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGrantRequest object.
 */
GetGrantRequest::GetGrantRequest()
    : LicenseManagerRequest(new GetGrantRequestPrivate(LicenseManagerRequest::GetGrantAction, this))
{

}

/*!
 * \reimp
 */
bool GetGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGrantRequest::response(QNetworkReply * const reply) const
{
    return new GetGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetGrantRequestPrivate
 * \brief The GetGrantRequestPrivate class provides private implementation for GetGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetGrantRequestPrivate::GetGrantRequestPrivate(
    const LicenseManagerRequest::Action action, GetGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGrantRequest
 * class' copy constructor.
 */
GetGrantRequestPrivate::GetGrantRequestPrivate(
    const GetGrantRequestPrivate &other, GetGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
