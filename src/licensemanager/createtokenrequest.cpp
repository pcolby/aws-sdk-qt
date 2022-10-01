// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
