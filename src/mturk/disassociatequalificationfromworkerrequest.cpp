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

#include "disassociatequalificationfromworkerrequest.h"
#include "disassociatequalificationfromworkerrequest_p.h"
#include "disassociatequalificationfromworkerresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DisassociateQualificationFromWorkerRequest
 * \brief The DisassociateQualificationFromWorkerRequest class provides an interface for MTurk DisassociateQualificationFromWorker requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::disassociateQualificationFromWorker
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateQualificationFromWorkerRequest::DisassociateQualificationFromWorkerRequest(const DisassociateQualificationFromWorkerRequest &other)
    : MTurkRequest(new DisassociateQualificationFromWorkerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateQualificationFromWorkerRequest object.
 */
DisassociateQualificationFromWorkerRequest::DisassociateQualificationFromWorkerRequest()
    : MTurkRequest(new DisassociateQualificationFromWorkerRequestPrivate(MTurkRequest::DisassociateQualificationFromWorkerAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateQualificationFromWorkerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateQualificationFromWorkerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateQualificationFromWorkerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateQualificationFromWorkerResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::DisassociateQualificationFromWorkerRequestPrivate
 * \brief The DisassociateQualificationFromWorkerRequestPrivate class provides private implementation for DisassociateQualificationFromWorkerRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DisassociateQualificationFromWorkerRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
DisassociateQualificationFromWorkerRequestPrivate::DisassociateQualificationFromWorkerRequestPrivate(
    const MTurkRequest::Action action, DisassociateQualificationFromWorkerRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateQualificationFromWorkerRequest
 * class' copy constructor.
 */
DisassociateQualificationFromWorkerRequestPrivate::DisassociateQualificationFromWorkerRequestPrivate(
    const DisassociateQualificationFromWorkerRequestPrivate &other, DisassociateQualificationFromWorkerRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
