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

#include "listsamplesrequest.h"
#include "listsamplesrequest_p.h"
#include "listsamplesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSamplesRequest
 * \brief The ListSamplesRequest class provides an interface for DeviceFarm ListSamples requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listSamples
 */

/*!
 * Constructs a copy of \a other.
 */
ListSamplesRequest::ListSamplesRequest(const ListSamplesRequest &other)
    : DeviceFarmRequest(new ListSamplesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSamplesRequest object.
 */
ListSamplesRequest::ListSamplesRequest()
    : DeviceFarmRequest(new ListSamplesRequestPrivate(DeviceFarmRequest::ListSamplesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSamplesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSamplesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSamplesRequest::response(QNetworkReply * const reply) const
{
    return new ListSamplesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListSamplesRequestPrivate
 * \brief The ListSamplesRequestPrivate class provides private implementation for ListSamplesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSamplesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSamplesRequest
 * class' copy constructor.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const ListSamplesRequestPrivate &other, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
