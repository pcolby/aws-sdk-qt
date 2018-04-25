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

#include "getthreatintelsetrequest.h"
#include "getthreatintelsetrequest_p.h"
#include "getthreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetThreatIntelSetRequest
 * \brief The GetThreatIntelSetRequest class provides an interface for GuardDuty GetThreatIntelSet requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getThreatIntelSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetThreatIntelSetRequest::GetThreatIntelSetRequest(const GetThreatIntelSetRequest &other)
    : GuardDutyRequest(new GetThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThreatIntelSetRequest object.
 */
GetThreatIntelSetRequest::GetThreatIntelSetRequest()
    : GuardDutyRequest(new GetThreatIntelSetRequestPrivate(GuardDutyRequest::GetThreatIntelSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetThreatIntelSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThreatIntelSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new GetThreatIntelSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetThreatIntelSetRequestPrivate
 * \brief The GetThreatIntelSetRequestPrivate class provides private implementation for GetThreatIntelSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetThreatIntelSetRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetThreatIntelSetRequestPrivate::GetThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, GetThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThreatIntelSetRequest
 * class' copy constructor.
 */
GetThreatIntelSetRequestPrivate::GetThreatIntelSetRequestPrivate(
    const GetThreatIntelSetRequestPrivate &other, GetThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
