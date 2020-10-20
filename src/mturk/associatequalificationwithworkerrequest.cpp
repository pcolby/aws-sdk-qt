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

#include "associatequalificationwithworkerrequest.h"
#include "associatequalificationwithworkerrequest_p.h"
#include "associatequalificationwithworkerresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerRequest
 * \brief The AssociateQualificationWithWorkerRequest class provides an interface for MTurk AssociateQualificationWithWorker requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::associateQualificationWithWorker
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateQualificationWithWorkerRequest::AssociateQualificationWithWorkerRequest(const AssociateQualificationWithWorkerRequest &other)
    : MTurkRequest(new AssociateQualificationWithWorkerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateQualificationWithWorkerRequest object.
 */
AssociateQualificationWithWorkerRequest::AssociateQualificationWithWorkerRequest()
    : MTurkRequest(new AssociateQualificationWithWorkerRequestPrivate(MTurkRequest::AssociateQualificationWithWorkerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateQualificationWithWorkerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateQualificationWithWorkerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateQualificationWithWorkerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateQualificationWithWorkerResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerRequestPrivate
 * \brief The AssociateQualificationWithWorkerRequestPrivate class provides private implementation for AssociateQualificationWithWorkerRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AssociateQualificationWithWorkerRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
AssociateQualificationWithWorkerRequestPrivate::AssociateQualificationWithWorkerRequestPrivate(
    const MTurkRequest::Action action, AssociateQualificationWithWorkerRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateQualificationWithWorkerRequest
 * class' copy constructor.
 */
AssociateQualificationWithWorkerRequestPrivate::AssociateQualificationWithWorkerRequestPrivate(
    const AssociateQualificationWithWorkerRequestPrivate &other, AssociateQualificationWithWorkerRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
