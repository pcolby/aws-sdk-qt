/*
    Copyright 2013-2020 Paul Colby

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

#include "updateexpirationforhitrequest.h"
#include "updateexpirationforhitrequest_p.h"
#include "updateexpirationforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITRequest
 * \brief The UpdateExpirationForHITRequest class provides an interface for MTurk UpdateExpirationForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateExpirationForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest(const UpdateExpirationForHITRequest &other)
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExpirationForHITRequest object.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest()
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(MTurkRequest::UpdateExpirationForHITAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExpirationForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExpirationForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExpirationForHITRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExpirationForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITRequestPrivate
 * \brief The UpdateExpirationForHITRequestPrivate class provides private implementation for UpdateExpirationForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateExpirationForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const MTurkRequest::Action action, UpdateExpirationForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExpirationForHITRequest
 * class' copy constructor.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const UpdateExpirationForHITRequestPrivate &other, UpdateExpirationForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
