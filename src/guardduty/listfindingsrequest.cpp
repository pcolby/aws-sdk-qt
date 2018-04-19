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

#include "listfindingsrequest.h"
#include "listfindingsrequest_p.h"
#include "listfindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListFindingsRequest
 * \brief The ListFindingsRequest class provides an interface for GuardDuty ListFindings requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listFindings
 */

/*!
 * Constructs a copy of \a other.
 */
ListFindingsRequest::ListFindingsRequest(const ListFindingsRequest &other)
    : GuardDutyRequest(new ListFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFindingsRequest object.
 */
ListFindingsRequest::ListFindingsRequest()
    : GuardDutyRequest(new ListFindingsRequestPrivate(GuardDutyRequest::ListFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::ListFindingsRequestPrivate
 * \brief The ListFindingsRequestPrivate class provides private implementation for ListFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a ListFindingsRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const GuardDutyRequest::Action action, ListFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFindingsRequest
 * class' copy constructor.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const ListFindingsRequestPrivate &other, ListFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
