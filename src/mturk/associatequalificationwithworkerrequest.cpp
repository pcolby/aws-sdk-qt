// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
