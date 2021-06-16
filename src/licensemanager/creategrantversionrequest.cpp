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

#include "creategrantversionrequest.h"
#include "creategrantversionrequest_p.h"
#include "creategrantversionresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionRequest
 * \brief The CreateGrantVersionRequest class provides an interface for LicenseManager CreateGrantVersion requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createGrantVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGrantVersionRequest::CreateGrantVersionRequest(const CreateGrantVersionRequest &other)
    : LicenseManagerRequest(new CreateGrantVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGrantVersionRequest object.
 */
CreateGrantVersionRequest::CreateGrantVersionRequest()
    : LicenseManagerRequest(new CreateGrantVersionRequestPrivate(LicenseManagerRequest::CreateGrantVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGrantVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGrantVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGrantVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGrantVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateGrantVersionRequestPrivate
 * \brief The CreateGrantVersionRequestPrivate class provides private implementation for CreateGrantVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantVersionRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateGrantVersionRequestPrivate::CreateGrantVersionRequestPrivate(
    const LicenseManagerRequest::Action action, CreateGrantVersionRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGrantVersionRequest
 * class' copy constructor.
 */
CreateGrantVersionRequestPrivate::CreateGrantVersionRequestPrivate(
    const CreateGrantVersionRequestPrivate &other, CreateGrantVersionRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
