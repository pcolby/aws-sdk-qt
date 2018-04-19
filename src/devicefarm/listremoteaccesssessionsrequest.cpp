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

#include "listremoteaccesssessionsrequest.h"
#include "listremoteaccesssessionsrequest_p.h"
#include "listremoteaccesssessionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsRequest
 * \brief The ListRemoteAccessSessionsRequest class provides an interface for DeviceFarm ListRemoteAccessSessions requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listRemoteAccessSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest(const ListRemoteAccessSessionsRequest &other)
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRemoteAccessSessionsRequest object.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest()
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(DeviceFarmRequest::ListRemoteAccessSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRemoteAccessSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRemoteAccessSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRemoteAccessSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListRemoteAccessSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsRequestPrivate
 * \brief The ListRemoteAccessSessionsRequestPrivate class provides private implementation for ListRemoteAccessSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a ListRemoteAccessSessionsRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListRemoteAccessSessionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRemoteAccessSessionsRequest
 * class' copy constructor.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const ListRemoteAccessSessionsRequestPrivate &other, ListRemoteAccessSessionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
