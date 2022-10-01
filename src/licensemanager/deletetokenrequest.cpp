// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetokenrequest.h"
#include "deletetokenrequest_p.h"
#include "deletetokenresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteTokenRequest
 * \brief The DeleteTokenRequest class provides an interface for LicenseManager DeleteToken requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteToken
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTokenRequest::DeleteTokenRequest(const DeleteTokenRequest &other)
    : LicenseManagerRequest(new DeleteTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTokenRequest object.
 */
DeleteTokenRequest::DeleteTokenRequest()
    : LicenseManagerRequest(new DeleteTokenRequestPrivate(LicenseManagerRequest::DeleteTokenAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTokenRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTokenResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteTokenRequestPrivate
 * \brief The DeleteTokenRequestPrivate class provides private implementation for DeleteTokenRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteTokenRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteTokenRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTokenRequest
 * class' copy constructor.
 */
DeleteTokenRequestPrivate::DeleteTokenRequestPrivate(
    const DeleteTokenRequestPrivate &other, DeleteTokenRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
