// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectgrantrequest.h"
#include "rejectgrantrequest_p.h"
#include "rejectgrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::RejectGrantRequest
 * \brief The RejectGrantRequest class provides an interface for LicenseManager RejectGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::rejectGrant
 */

/*!
 * Constructs a copy of \a other.
 */
RejectGrantRequest::RejectGrantRequest(const RejectGrantRequest &other)
    : LicenseManagerRequest(new RejectGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectGrantRequest object.
 */
RejectGrantRequest::RejectGrantRequest()
    : LicenseManagerRequest(new RejectGrantRequestPrivate(LicenseManagerRequest::RejectGrantAction, this))
{

}

/*!
 * \reimp
 */
bool RejectGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectGrantRequest::response(QNetworkReply * const reply) const
{
    return new RejectGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::RejectGrantRequestPrivate
 * \brief The RejectGrantRequestPrivate class provides private implementation for RejectGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a RejectGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
RejectGrantRequestPrivate::RejectGrantRequestPrivate(
    const LicenseManagerRequest::Action action, RejectGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectGrantRequest
 * class' copy constructor.
 */
RejectGrantRequestPrivate::RejectGrantRequestPrivate(
    const RejectGrantRequestPrivate &other, RejectGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
