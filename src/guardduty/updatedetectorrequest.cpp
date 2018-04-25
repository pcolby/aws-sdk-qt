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

#include "updatedetectorrequest.h"
#include "updatedetectorrequest_p.h"
#include "updatedetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateDetectorRequest
 * \brief The UpdateDetectorRequest class provides an interface for GuardDuty UpdateDetector requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateDetector
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDetectorRequest::UpdateDetectorRequest(const UpdateDetectorRequest &other)
    : GuardDutyRequest(new UpdateDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDetectorRequest object.
 */
UpdateDetectorRequest::UpdateDetectorRequest()
    : GuardDutyRequest(new UpdateDetectorRequestPrivate(GuardDutyRequest::UpdateDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDetectorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::UpdateDetectorRequestPrivate
 * \brief The UpdateDetectorRequestPrivate class provides private implementation for UpdateDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateDetectorRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
UpdateDetectorRequestPrivate::UpdateDetectorRequestPrivate(
    const GuardDutyRequest::Action action, UpdateDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorRequest
 * class' copy constructor.
 */
UpdateDetectorRequestPrivate::UpdateDetectorRequestPrivate(
    const UpdateDetectorRequestPrivate &other, UpdateDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
