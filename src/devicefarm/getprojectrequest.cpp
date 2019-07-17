/*
    Copyright 2013-2019 Paul Colby

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

#include "getprojectrequest.h"
#include "getprojectrequest_p.h"
#include "getprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetProjectRequest
 * \brief The GetProjectRequest class provides an interface for DeviceFarm GetProject requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getProject
 */

/*!
 * Constructs a copy of \a other.
 */
GetProjectRequest::GetProjectRequest(const GetProjectRequest &other)
    : DeviceFarmRequest(new GetProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProjectRequest object.
 */
GetProjectRequest::GetProjectRequest()
    : DeviceFarmRequest(new GetProjectRequestPrivate(DeviceFarmRequest::GetProjectAction, this))
{

}

/*!
 * \reimp
 */
bool GetProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProjectRequest::response(QNetworkReply * const reply) const
{
    return new GetProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetProjectRequestPrivate
 * \brief The GetProjectRequestPrivate class provides private implementation for GetProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetProjectRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const DeviceFarmRequest::Action action, GetProjectRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProjectRequest
 * class' copy constructor.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const GetProjectRequestPrivate &other, GetProjectRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
