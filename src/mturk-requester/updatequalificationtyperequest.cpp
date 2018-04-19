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

#include "updatequalificationtyperequest.h"
#include "updatequalificationtyperequest_p.h"
#include "updatequalificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeRequest
 * \brief The UpdateQualificationTypeRequest class provides an interface for MTurk UpdateQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQualificationTypeRequest::UpdateQualificationTypeRequest(const UpdateQualificationTypeRequest &other)
    : MTurkRequest(new UpdateQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQualificationTypeRequest object.
 */
UpdateQualificationTypeRequest::UpdateQualificationTypeRequest()
    : MTurkRequest(new UpdateQualificationTypeRequestPrivate(MTurkRequest::UpdateQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeRequestPrivate
 * \brief The UpdateQualificationTypeRequestPrivate class provides private implementation for UpdateQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a UpdateQualificationTypeRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
UpdateQualificationTypeRequestPrivate::UpdateQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, UpdateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQualificationTypeRequest
 * class' copy constructor.
 */
UpdateQualificationTypeRequestPrivate::UpdateQualificationTypeRequestPrivate(
    const UpdateQualificationTypeRequestPrivate &other, UpdateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
