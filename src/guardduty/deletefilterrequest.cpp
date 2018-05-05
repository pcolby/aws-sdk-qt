/*
    Copyright 2013-2018 Paul Colby

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

#include "deletefilterrequest.h"
#include "deletefilterrequest_p.h"
#include "deletefilterresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteFilterRequest
 * \brief The DeleteFilterRequest class provides an interface for GuardDuty DeleteFilter requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFilterRequest::DeleteFilterRequest(const DeleteFilterRequest &other)
    : GuardDutyRequest(new DeleteFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFilterRequest object.
 */
DeleteFilterRequest::DeleteFilterRequest()
    : GuardDutyRequest(new DeleteFilterRequestPrivate(GuardDutyRequest::DeleteFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFilterResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteFilterRequestPrivate
 * \brief The DeleteFilterRequestPrivate class provides private implementation for DeleteFilterRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteFilterRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const GuardDutyRequest::Action action, DeleteFilterRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFilterRequest
 * class' copy constructor.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const DeleteFilterRequestPrivate &other, DeleteFilterRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
