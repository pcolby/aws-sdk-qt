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

#include "gettestrequest.h"
#include "gettestrequest_p.h"
#include "gettestresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestRequest
 * \brief The GetTestRequest class provides an interface for DeviceFarm GetTest requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getTest
 */

/*!
 * Constructs a copy of \a other.
 */
GetTestRequest::GetTestRequest(const GetTestRequest &other)
    : DeviceFarmRequest(new GetTestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTestRequest object.
 */
GetTestRequest::GetTestRequest()
    : DeviceFarmRequest(new GetTestRequestPrivate(DeviceFarmRequest::GetTestAction, this))
{

}

/*!
 * \reimp
 */
bool GetTestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTestRequest::response(QNetworkReply * const reply) const
{
    return new GetTestResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetTestRequestPrivate
 * \brief The GetTestRequestPrivate class provides private implementation for GetTestRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetTestRequestPrivate::GetTestRequestPrivate(
    const DeviceFarmRequest::Action action, GetTestRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTestRequest
 * class' copy constructor.
 */
GetTestRequestPrivate::GetTestRequestPrivate(
    const GetTestRequestPrivate &other, GetTestRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
