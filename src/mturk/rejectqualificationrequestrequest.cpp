/*
    Copyright 2013-2021 Paul Colby

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

#include "rejectqualificationrequestrequest.h"
#include "rejectqualificationrequestrequest_p.h"
#include "rejectqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectQualificationRequestRequest
 * \brief The RejectQualificationRequestRequest class provides an interface for MTurk RejectQualificationRequest requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectQualificationRequest
 */

/*!
 * Constructs a copy of \a other.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest(const RejectQualificationRequestRequest &other)
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectQualificationRequestRequest object.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest()
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(MTurkRequest::RejectQualificationRequestAction, this))
{

}

/*!
 * \reimp
 */
bool RejectQualificationRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectQualificationRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new RejectQualificationRequestResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::RejectQualificationRequestRequestPrivate
 * \brief The RejectQualificationRequestRequestPrivate class provides private implementation for RejectQualificationRequestRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectQualificationRequestRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectQualificationRequestRequest
 * class' copy constructor.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const RejectQualificationRequestRequestPrivate &other, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
