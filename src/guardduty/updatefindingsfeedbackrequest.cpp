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

#include "updatefindingsfeedbackrequest.h"
#include "updatefindingsfeedbackrequest_p.h"
#include "updatefindingsfeedbackresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateFindingsFeedbackRequest
 * \brief The UpdateFindingsFeedbackRequest class provides an interface for GuardDuty UpdateFindingsFeedback requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateFindingsFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFindingsFeedbackRequest::UpdateFindingsFeedbackRequest(const UpdateFindingsFeedbackRequest &other)
    : GuardDutyRequest(new UpdateFindingsFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFindingsFeedbackRequest object.
 */
UpdateFindingsFeedbackRequest::UpdateFindingsFeedbackRequest()
    : GuardDutyRequest(new UpdateFindingsFeedbackRequestPrivate(GuardDutyRequest::UpdateFindingsFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFindingsFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFindingsFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFindingsFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFindingsFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::UpdateFindingsFeedbackRequestPrivate
 * \brief The UpdateFindingsFeedbackRequestPrivate class provides private implementation for UpdateFindingsFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a UpdateFindingsFeedbackRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
UpdateFindingsFeedbackRequestPrivate::UpdateFindingsFeedbackRequestPrivate(
    const GuardDutyRequest::Action action, UpdateFindingsFeedbackRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFindingsFeedbackRequest
 * class' copy constructor.
 */
UpdateFindingsFeedbackRequestPrivate::UpdateFindingsFeedbackRequestPrivate(
    const UpdateFindingsFeedbackRequestPrivate &other, UpdateFindingsFeedbackRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
