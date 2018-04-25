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

#include "unarchivefindingsrequest.h"
#include "unarchivefindingsrequest_p.h"
#include "unarchivefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UnarchiveFindingsRequest
 * \brief The UnarchiveFindingsRequest class provides an interface for GuardDuty UnarchiveFindings requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::unarchiveFindings
 */

/*!
 * Constructs a copy of \a other.
 */
UnarchiveFindingsRequest::UnarchiveFindingsRequest(const UnarchiveFindingsRequest &other)
    : GuardDutyRequest(new UnarchiveFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnarchiveFindingsRequest object.
 */
UnarchiveFindingsRequest::UnarchiveFindingsRequest()
    : GuardDutyRequest(new UnarchiveFindingsRequestPrivate(GuardDutyRequest::UnarchiveFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool UnarchiveFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnarchiveFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnarchiveFindingsRequest::response(QNetworkReply * const reply) const
{
    return new UnarchiveFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::UnarchiveFindingsRequestPrivate
 * \brief The UnarchiveFindingsRequestPrivate class provides private implementation for UnarchiveFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UnarchiveFindingsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
UnarchiveFindingsRequestPrivate::UnarchiveFindingsRequestPrivate(
    const GuardDutyRequest::Action action, UnarchiveFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnarchiveFindingsRequest
 * class' copy constructor.
 */
UnarchiveFindingsRequestPrivate::UnarchiveFindingsRequestPrivate(
    const UnarchiveFindingsRequestPrivate &other, UnarchiveFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
