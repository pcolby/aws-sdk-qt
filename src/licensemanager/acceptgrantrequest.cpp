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

#include "acceptgrantrequest.h"
#include "acceptgrantrequest_p.h"
#include "acceptgrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::AcceptGrantRequest
 * \brief The AcceptGrantRequest class provides an interface for LicenseManager AcceptGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::acceptGrant
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptGrantRequest::AcceptGrantRequest(const AcceptGrantRequest &other)
    : LicenseManagerRequest(new AcceptGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptGrantRequest object.
 */
AcceptGrantRequest::AcceptGrantRequest()
    : LicenseManagerRequest(new AcceptGrantRequestPrivate(LicenseManagerRequest::AcceptGrantAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptGrantRequest::response(QNetworkReply * const reply) const
{
    return new AcceptGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::AcceptGrantRequestPrivate
 * \brief The AcceptGrantRequestPrivate class provides private implementation for AcceptGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a AcceptGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
AcceptGrantRequestPrivate::AcceptGrantRequestPrivate(
    const LicenseManagerRequest::Action action, AcceptGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptGrantRequest
 * class' copy constructor.
 */
AcceptGrantRequestPrivate::AcceptGrantRequestPrivate(
    const AcceptGrantRequestPrivate &other, AcceptGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
