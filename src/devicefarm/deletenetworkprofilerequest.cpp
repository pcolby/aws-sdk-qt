/*
    Copyright 2013-2020 Paul Colby

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

#include "deletenetworkprofilerequest.h"
#include "deletenetworkprofilerequest_p.h"
#include "deletenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileRequest
 * \brief The DeleteNetworkProfileRequest class provides an interface for DeviceFarm DeleteNetworkProfile requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest(const DeleteNetworkProfileRequest &other)
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkProfileRequest object.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest()
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(DeviceFarmRequest::DeleteNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileRequestPrivate
 * \brief The DeleteNetworkProfileRequestPrivate class provides private implementation for DeleteNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteNetworkProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkProfileRequest
 * class' copy constructor.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeleteNetworkProfileRequestPrivate &other, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
