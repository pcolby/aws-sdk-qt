// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkerblockrequest.h"
#include "createworkerblockrequest_p.h"
#include "createworkerblockresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateWorkerBlockRequest
 * \brief The CreateWorkerBlockRequest class provides an interface for MTurk CreateWorkerBlock requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createWorkerBlock
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkerBlockRequest::CreateWorkerBlockRequest(const CreateWorkerBlockRequest &other)
    : MTurkRequest(new CreateWorkerBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkerBlockRequest object.
 */
CreateWorkerBlockRequest::CreateWorkerBlockRequest()
    : MTurkRequest(new CreateWorkerBlockRequestPrivate(MTurkRequest::CreateWorkerBlockAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkerBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkerBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkerBlockRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkerBlockResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateWorkerBlockRequestPrivate
 * \brief The CreateWorkerBlockRequestPrivate class provides private implementation for CreateWorkerBlockRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateWorkerBlockRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateWorkerBlockRequestPrivate::CreateWorkerBlockRequestPrivate(
    const MTurkRequest::Action action, CreateWorkerBlockRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkerBlockRequest
 * class' copy constructor.
 */
CreateWorkerBlockRequestPrivate::CreateWorkerBlockRequestPrivate(
    const CreateWorkerBlockRequestPrivate &other, CreateWorkerBlockRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
