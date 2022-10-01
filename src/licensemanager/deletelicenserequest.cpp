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

#include "deletelicenserequest.h"
#include "deletelicenserequest_p.h"
#include "deletelicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseRequest
 * \brief The DeleteLicenseRequest class provides an interface for LicenseManager DeleteLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicense
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLicenseRequest::DeleteLicenseRequest(const DeleteLicenseRequest &other)
    : LicenseManagerRequest(new DeleteLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLicenseRequest object.
 */
DeleteLicenseRequest::DeleteLicenseRequest()
    : LicenseManagerRequest(new DeleteLicenseRequestPrivate(LicenseManagerRequest::DeleteLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLicenseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseRequestPrivate
 * \brief The DeleteLicenseRequestPrivate class provides private implementation for DeleteLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
DeleteLicenseRequestPrivate::DeleteLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, DeleteLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLicenseRequest
 * class' copy constructor.
 */
DeleteLicenseRequestPrivate::DeleteLicenseRequestPrivate(
    const DeleteLicenseRequestPrivate &other, DeleteLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
