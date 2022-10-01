// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
