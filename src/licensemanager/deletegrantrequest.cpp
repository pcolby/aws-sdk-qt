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
