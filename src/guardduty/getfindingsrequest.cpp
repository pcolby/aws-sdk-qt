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

#include "getfindingsrequest.h"
#include "getfindingsrequest_p.h"
#include "getfindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFindingsRequest
 * \brief The GetFindingsRequest class provides an interface for GuardDuty GetFindings requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getFindings
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsRequest::GetFindingsRequest(const GetFindingsRequest &other)
    : GuardDutyRequest(new GetFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsRequest object.
 */
GetFindingsRequest::GetFindingsRequest()
    : GuardDutyRequest(new GetFindingsRequestPrivate(GuardDutyRequest::GetFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetFindingsRequestPrivate
 * \brief The GetFindingsRequestPrivate class provides private implementation for GetFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetFindingsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GuardDutyRequest::Action action, GetFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsRequest
 * class' copy constructor.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GetFindingsRequestPrivate &other, GetFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
