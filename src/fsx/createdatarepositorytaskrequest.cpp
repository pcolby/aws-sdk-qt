// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatarepositorytaskrequest.h"
#include "createdatarepositorytaskrequest_p.h"
#include "createdatarepositorytaskresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateDataRepositoryTaskRequest
 * \brief The CreateDataRepositoryTaskRequest class provides an interface for FSx CreateDataRepositoryTask requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createDataRepositoryTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataRepositoryTaskRequest::CreateDataRepositoryTaskRequest(const CreateDataRepositoryTaskRequest &other)
    : FSxRequest(new CreateDataRepositoryTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataRepositoryTaskRequest object.
 */
CreateDataRepositoryTaskRequest::CreateDataRepositoryTaskRequest()
    : FSxRequest(new CreateDataRepositoryTaskRequestPrivate(FSxRequest::CreateDataRepositoryTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataRepositoryTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataRepositoryTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataRepositoryTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataRepositoryTaskResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateDataRepositoryTaskRequestPrivate
 * \brief The CreateDataRepositoryTaskRequestPrivate class provides private implementation for CreateDataRepositoryTaskRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateDataRepositoryTaskRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateDataRepositoryTaskRequestPrivate::CreateDataRepositoryTaskRequestPrivate(
    const FSxRequest::Action action, CreateDataRepositoryTaskRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataRepositoryTaskRequest
 * class' copy constructor.
 */
CreateDataRepositoryTaskRequestPrivate::CreateDataRepositoryTaskRequestPrivate(
    const CreateDataRepositoryTaskRequestPrivate &other, CreateDataRepositoryTaskRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
