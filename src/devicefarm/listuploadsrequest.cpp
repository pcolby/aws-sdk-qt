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

#include "listuploadsrequest.h"
#include "listuploadsrequest_p.h"
#include "listuploadsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUploadsRequest
 * \brief The ListUploadsRequest class provides an interface for DeviceFarm ListUploads requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listUploads
 */

/*!
 * Constructs a copy of \a other.
 */
ListUploadsRequest::ListUploadsRequest(const ListUploadsRequest &other)
    : DeviceFarmRequest(new ListUploadsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUploadsRequest object.
 */
ListUploadsRequest::ListUploadsRequest()
    : DeviceFarmRequest(new ListUploadsRequestPrivate(DeviceFarmRequest::ListUploadsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUploadsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUploadsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUploadsRequest::response(QNetworkReply * const reply) const
{
    return new ListUploadsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListUploadsRequestPrivate
 * \brief The ListUploadsRequestPrivate class provides private implementation for ListUploadsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a ListUploadsRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUploadsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUploadsRequest
 * class' copy constructor.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const ListUploadsRequestPrivate &other, ListUploadsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
