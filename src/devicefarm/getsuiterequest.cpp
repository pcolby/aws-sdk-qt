/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsuiterequest.h"
#include "getsuiterequest_p.h"
#include "getsuiteresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteRequest
 * \brief The GetSuiteRequest class provides an interface for DeviceFarm GetSuite requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * Constructs a copy of \a other.
 */
GetSuiteRequest::GetSuiteRequest(const GetSuiteRequest &other)
    : DeviceFarmRequest(new GetSuiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSuiteRequest object.
 */
GetSuiteRequest::GetSuiteRequest()
    : DeviceFarmRequest(new GetSuiteRequestPrivate(DeviceFarmRequest::GetSuiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSuiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetSuiteRequestPrivate
 * \brief The GetSuiteRequestPrivate class provides private implementation for GetSuiteRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a GetSuiteRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const DeviceFarmRequest::Action action, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteRequest
 * class' copy constructor.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const GetSuiteRequestPrivate &other, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
