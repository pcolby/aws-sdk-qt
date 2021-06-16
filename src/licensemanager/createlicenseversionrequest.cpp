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

#include "createlicenseversionrequest.h"
#include "createlicenseversionrequest_p.h"
#include "createlicenseversionresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionRequest
 * \brief The CreateLicenseVersionRequest class provides an interface for LicenseManager CreateLicenseVersion requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createLicenseVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLicenseVersionRequest::CreateLicenseVersionRequest(const CreateLicenseVersionRequest &other)
    : LicenseManagerRequest(new CreateLicenseVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLicenseVersionRequest object.
 */
CreateLicenseVersionRequest::CreateLicenseVersionRequest()
    : LicenseManagerRequest(new CreateLicenseVersionRequestPrivate(LicenseManagerRequest::CreateLicenseVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLicenseVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLicenseVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLicenseVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLicenseVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionRequestPrivate
 * \brief The CreateLicenseVersionRequestPrivate class provides private implementation for CreateLicenseVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseVersionRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateLicenseVersionRequestPrivate::CreateLicenseVersionRequestPrivate(
    const LicenseManagerRequest::Action action, CreateLicenseVersionRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLicenseVersionRequest
 * class' copy constructor.
 */
CreateLicenseVersionRequestPrivate::CreateLicenseVersionRequestPrivate(
    const CreateLicenseVersionRequestPrivate &other, CreateLicenseVersionRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
