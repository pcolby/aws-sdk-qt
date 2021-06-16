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
