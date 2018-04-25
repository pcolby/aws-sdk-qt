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

#include "updatethreatintelsetrequest.h"
#include "updatethreatintelsetrequest_p.h"
#include "updatethreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateThreatIntelSetRequest
 * \brief The UpdateThreatIntelSetRequest class provides an interface for GuardDuty UpdateThreatIntelSet requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateThreatIntelSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThreatIntelSetRequest::UpdateThreatIntelSetRequest(const UpdateThreatIntelSetRequest &other)
    : GuardDutyRequest(new UpdateThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThreatIntelSetRequest object.
 */
UpdateThreatIntelSetRequest::UpdateThreatIntelSetRequest()
    : GuardDutyRequest(new UpdateThreatIntelSetRequestPrivate(GuardDutyRequest::UpdateThreatIntelSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThreatIntelSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThreatIntelSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThreatIntelSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::UpdateThreatIntelSetRequestPrivate
 * \brief The UpdateThreatIntelSetRequestPrivate class provides private implementation for UpdateThreatIntelSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateThreatIntelSetRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
UpdateThreatIntelSetRequestPrivate::UpdateThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, UpdateThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThreatIntelSetRequest
 * class' copy constructor.
 */
UpdateThreatIntelSetRequestPrivate::UpdateThreatIntelSetRequestPrivate(
    const UpdateThreatIntelSetRequestPrivate &other, UpdateThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
