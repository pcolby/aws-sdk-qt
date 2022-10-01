// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
