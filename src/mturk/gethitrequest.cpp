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

#include "gethitrequest.h"
#include "gethitrequest_p.h"
#include "gethitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetHITRequest
 * \brief The GetHITRequest class provides an interface for MTurk GetHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getHIT
 */

/*!
 * Constructs a copy of \a other.
 */
GetHITRequest::GetHITRequest(const GetHITRequest &other)
    : MTurkRequest(new GetHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHITRequest object.
 */
GetHITRequest::GetHITRequest()
    : MTurkRequest(new GetHITRequestPrivate(MTurkRequest::GetHITAction, this))
{

}

/*!
 * \reimp
 */
bool GetHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHITRequest::response(QNetworkReply * const reply) const
{
    return new GetHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetHITRequestPrivate
 * \brief The GetHITRequestPrivate class provides private implementation for GetHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const MTurkRequest::Action action, GetHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHITRequest
 * class' copy constructor.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const GetHITRequestPrivate &other, GetHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
