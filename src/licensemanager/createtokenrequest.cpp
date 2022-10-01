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

#include "createtokenrequest.h"
#include "createtokenrequest_p.h"
#include "createtokenresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateTokenRequest
 * \brief The CreateTokenRequest class provides an interface for LicenseManager CreateToken requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createToken
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTokenRequest::CreateTokenRequest(const CreateTokenRequest &other)
    : LicenseManagerRequest(new CreateTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTokenRequest object.
 */
CreateTokenRequest::CreateTokenRequest()
    : LicenseManagerRequest(new CreateTokenRequestPrivate(LicenseManagerRequest::CreateTokenAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTokenRequest::response(QNetworkReply * const reply) const
{
    return new CreateTokenResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateTokenRequestPrivate
 * \brief The CreateTokenRequestPrivate class provides private implementation for CreateTokenRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateTokenRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateTokenRequestPrivate::CreateTokenRequestPrivate(
    const LicenseManagerRequest::Action action, CreateTokenRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTokenRequest
 * class' copy constructor.
 */
CreateTokenRequestPrivate::CreateTokenRequestPrivate(
    const CreateTokenRequestPrivate &other, CreateTokenRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
