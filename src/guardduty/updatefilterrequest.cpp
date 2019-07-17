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

#include "updatefilterrequest.h"
#include "updatefilterrequest_p.h"
#include "updatefilterresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateFilterRequest
 * \brief The UpdateFilterRequest class provides an interface for GuardDuty UpdateFilter requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFilterRequest::UpdateFilterRequest(const UpdateFilterRequest &other)
    : GuardDutyRequest(new UpdateFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFilterRequest object.
 */
UpdateFilterRequest::UpdateFilterRequest()
    : GuardDutyRequest(new UpdateFilterRequestPrivate(GuardDutyRequest::UpdateFilterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFilterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFilterResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::UpdateFilterRequestPrivate
 * \brief The UpdateFilterRequestPrivate class provides private implementation for UpdateFilterRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateFilterRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const GuardDutyRequest::Action action, UpdateFilterRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFilterRequest
 * class' copy constructor.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const UpdateFilterRequestPrivate &other, UpdateFilterRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
