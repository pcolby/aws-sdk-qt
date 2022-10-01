// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegrantrequest.h"
#include "deletegrantrequest_p.h"
#include "deletegrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteGrantRequest
 * \brief The DeleteGrantRequest class provides an interface for LicenseManager DeleteGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteGrant
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGrantRequest::DeleteGrantRequest(const DeleteGrantRequest &other)
    : LicenseManagerRequest(new DeleteGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGrantRequest object.
 */
DeleteGrantRequest::DeleteGrantRequest()
    : LicenseManagerRequest(new DeleteGrantRequestPrivate(LicenseManagerRequest::DeleteGrantAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGrantRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteGrantRequestPrivate
 * \brief The DeleteGrantRequestPrivate class provides private implementation for DeleteGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteGrantRequestPrivate::DeleteGrantRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGrantRequest
 * class' copy constructor.
 */
DeleteGrantRequestPrivate::DeleteGrantRequestPrivate(
    const DeleteGrantRequestPrivate &other, DeleteGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
