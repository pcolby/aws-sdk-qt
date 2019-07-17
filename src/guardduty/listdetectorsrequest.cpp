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

#include "listdetectorsrequest.h"
#include "listdetectorsrequest_p.h"
#include "listdetectorsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListDetectorsRequest
 * \brief The ListDetectorsRequest class provides an interface for GuardDuty ListDetectors requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listDetectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorsRequest::ListDetectorsRequest(const ListDetectorsRequest &other)
    : GuardDutyRequest(new ListDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorsRequest object.
 */
ListDetectorsRequest::ListDetectorsRequest()
    : GuardDutyRequest(new ListDetectorsRequestPrivate(GuardDutyRequest::ListDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::ListDetectorsRequestPrivate
 * \brief The ListDetectorsRequestPrivate class provides private implementation for ListDetectorsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListDetectorsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const GuardDutyRequest::Action action, ListDetectorsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorsRequest
 * class' copy constructor.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const ListDetectorsRequestPrivate &other, ListDetectorsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
