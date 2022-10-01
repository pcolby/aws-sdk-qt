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

#include "createlicenserequest.h"
#include "createlicenserequest_p.h"
#include "createlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseRequest
 * \brief The CreateLicenseRequest class provides an interface for LicenseManager CreateLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseRequest::CreateLicenseRequest(const CreateLicenseRequest &other)
    : LicenseManagerRequest(new CreateLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseRequest object.
 */
CreateLicenseRequest::CreateLicenseRequest()
    : LicenseManagerRequest(new CreateLicenseRequestPrivate(LicenseManagerRequest::CreateLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseRequestPrivate
 * \brief The CreateLicenseRequestPrivate class provides private implementation for CreateLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseRequestPrivate::CreateLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseRequest
 * class' copy constructor.
 */
CreateLicenseRequestPrivate::CreateLicenseRequestPrivate(
    const CreateLicenseRequestPrivate &other, CreateLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
