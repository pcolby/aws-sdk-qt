// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyworkersrequest.h"
#include "notifyworkersrequest_p.h"
#include "notifyworkersresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::NotifyWorkersRequest
 * \brief The NotifyWorkersRequest class provides an interface for MTurk NotifyWorkers requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::notifyWorkers
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyWorkersRequest::NotifyWorkersRequest(const NotifyWorkersRequest &other)
    : MTurkRequest(new NotifyWorkersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyWorkersRequest object.
 */
NotifyWorkersRequest::NotifyWorkersRequest()
    : MTurkRequest(new NotifyWorkersRequestPrivate(MTurkRequest::NotifyWorkersAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyWorkersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyWorkersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyWorkersRequest::response(QNetworkReply * const reply) const
{
    return new NotifyWorkersResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::NotifyWorkersRequestPrivate
 * \brief The NotifyWorkersRequestPrivate class provides private implementation for NotifyWorkersRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a NotifyWorkersRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const MTurkRequest::Action action, NotifyWorkersRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyWorkersRequest
 * class' copy constructor.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const NotifyWorkersRequestPrivate &other, NotifyWorkersRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
