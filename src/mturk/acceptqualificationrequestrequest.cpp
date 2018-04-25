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

#include "acceptqualificationrequestrequest.h"
#include "acceptqualificationrequestrequest_p.h"
#include "acceptqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestRequest
 * \brief The AcceptQualificationRequestRequest class provides an interface for MTurk AcceptQualificationRequest requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::acceptQualificationRequest
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest(const AcceptQualificationRequestRequest &other)
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptQualificationRequestRequest object.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest()
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(MTurkRequest::AcceptQualificationRequestAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptQualificationRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptQualificationRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new AcceptQualificationRequestResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestRequestPrivate
 * \brief The AcceptQualificationRequestRequestPrivate class provides private implementation for AcceptQualificationRequestRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AcceptQualificationRequestRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, AcceptQualificationRequestRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptQualificationRequestRequest
 * class' copy constructor.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const AcceptQualificationRequestRequestPrivate &other, AcceptQualificationRequestRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
