// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkerblockrequest.h"
#include "deleteworkerblockrequest_p.h"
#include "deleteworkerblockresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockRequest
 * \brief The DeleteWorkerBlockRequest class provides an interface for MTurk DeleteWorkerBlock requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteWorkerBlock
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest(const DeleteWorkerBlockRequest &other)
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkerBlockRequest object.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest()
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(MTurkRequest::DeleteWorkerBlockAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkerBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkerBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkerBlockRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkerBlockResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockRequestPrivate
 * \brief The DeleteWorkerBlockRequestPrivate class provides private implementation for DeleteWorkerBlockRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteWorkerBlockRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const MTurkRequest::Action action, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkerBlockRequest
 * class' copy constructor.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const DeleteWorkerBlockRequestPrivate &other, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
