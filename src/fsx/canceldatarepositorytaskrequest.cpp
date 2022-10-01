// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceldatarepositorytaskrequest.h"
#include "canceldatarepositorytaskrequest_p.h"
#include "canceldatarepositorytaskresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CancelDataRepositoryTaskRequest
 * \brief The CancelDataRepositoryTaskRequest class provides an interface for FSx CancelDataRepositoryTask requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::cancelDataRepositoryTask
 */

/*!
 * Constructs a copy of \a other.
 */
CancelDataRepositoryTaskRequest::CancelDataRepositoryTaskRequest(const CancelDataRepositoryTaskRequest &other)
    : FSxRequest(new CancelDataRepositoryTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelDataRepositoryTaskRequest object.
 */
CancelDataRepositoryTaskRequest::CancelDataRepositoryTaskRequest()
    : FSxRequest(new CancelDataRepositoryTaskRequestPrivate(FSxRequest::CancelDataRepositoryTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CancelDataRepositoryTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelDataRepositoryTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelDataRepositoryTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelDataRepositoryTaskResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CancelDataRepositoryTaskRequestPrivate
 * \brief The CancelDataRepositoryTaskRequestPrivate class provides private implementation for CancelDataRepositoryTaskRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CancelDataRepositoryTaskRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CancelDataRepositoryTaskRequestPrivate::CancelDataRepositoryTaskRequestPrivate(
    const FSxRequest::Action action, CancelDataRepositoryTaskRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelDataRepositoryTaskRequest
 * class' copy constructor.
 */
CancelDataRepositoryTaskRequestPrivate::CancelDataRepositoryTaskRequestPrivate(
    const CancelDataRepositoryTaskRequestPrivate &other, CancelDataRepositoryTaskRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
