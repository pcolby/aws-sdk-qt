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
