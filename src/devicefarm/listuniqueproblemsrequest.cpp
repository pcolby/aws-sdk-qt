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

#include "listuniqueproblemsrequest.h"
#include "listuniqueproblemsrequest_p.h"
#include "listuniqueproblemsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsRequest
 * \brief The ListUniqueProblemsRequest class provides an interface for DeviceFarm ListUniqueProblems requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listUniqueProblems
 */

/*!
 * Constructs a copy of \a other.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest(const ListUniqueProblemsRequest &other)
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUniqueProblemsRequest object.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest()
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(DeviceFarmRequest::ListUniqueProblemsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUniqueProblemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUniqueProblemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUniqueProblemsRequest::response(QNetworkReply * const reply) const
{
    return new ListUniqueProblemsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListUniqueProblemsRequestPrivate
 * \brief The ListUniqueProblemsRequestPrivate class provides private implementation for ListUniqueProblemsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUniqueProblemsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUniqueProblemsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUniqueProblemsRequest
 * class' copy constructor.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const ListUniqueProblemsRequestPrivate &other, ListUniqueProblemsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
