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

#include "updatehittypeofhitrequest.h"
#include "updatehittypeofhitrequest_p.h"
#include "updatehittypeofhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITTypeOfHITRequest
 * \brief The UpdateHITTypeOfHITRequest class provides an interface for MTurk UpdateHITTypeOfHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateHITTypeOfHIT
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHITTypeOfHITRequest::UpdateHITTypeOfHITRequest(const UpdateHITTypeOfHITRequest &other)
    : MTurkRequest(new UpdateHITTypeOfHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHITTypeOfHITRequest object.
 */
UpdateHITTypeOfHITRequest::UpdateHITTypeOfHITRequest()
    : MTurkRequest(new UpdateHITTypeOfHITRequestPrivate(MTurkRequest::UpdateHITTypeOfHITAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHITTypeOfHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHITTypeOfHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHITTypeOfHITRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHITTypeOfHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::UpdateHITTypeOfHITRequestPrivate
 * \brief The UpdateHITTypeOfHITRequestPrivate class provides private implementation for UpdateHITTypeOfHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a UpdateHITTypeOfHITRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
UpdateHITTypeOfHITRequestPrivate::UpdateHITTypeOfHITRequestPrivate(
    const MTurkRequest::Action action, UpdateHITTypeOfHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHITTypeOfHITRequest
 * class' copy constructor.
 */
UpdateHITTypeOfHITRequestPrivate::UpdateHITTypeOfHITRequestPrivate(
    const UpdateHITTypeOfHITRequestPrivate &other, UpdateHITTypeOfHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
