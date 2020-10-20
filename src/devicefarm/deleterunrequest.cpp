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

#include "deleterunrequest.h"
#include "deleterunrequest_p.h"
#include "deleterunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRunRequest
 * \brief The DeleteRunRequest class provides an interface for DeviceFarm DeleteRun requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteRun
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRunRequest::DeleteRunRequest(const DeleteRunRequest &other)
    : DeviceFarmRequest(new DeleteRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRunRequest object.
 */
DeleteRunRequest::DeleteRunRequest()
    : DeviceFarmRequest(new DeleteRunRequestPrivate(DeviceFarmRequest::DeleteRunAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRunRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRunResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteRunRequestPrivate
 * \brief The DeleteRunRequestPrivate class provides private implementation for DeleteRunRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRunRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteRunRequestPrivate::DeleteRunRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRunRequest
 * class' copy constructor.
 */
DeleteRunRequestPrivate::DeleteRunRequestPrivate(
    const DeleteRunRequestPrivate &other, DeleteRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
