// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtaskrequest.h"
#include "createtaskrequest_p.h"
#include "createtaskresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::CreateTaskRequest
 * \brief The CreateTaskRequest class provides an interface for SnowDeviceManagement CreateTask requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::createTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTaskRequest::CreateTaskRequest(const CreateTaskRequest &other)
    : SnowDeviceManagementRequest(new CreateTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTaskRequest object.
 */
CreateTaskRequest::CreateTaskRequest()
    : SnowDeviceManagementRequest(new CreateTaskRequestPrivate(SnowDeviceManagementRequest::CreateTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateTaskResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::CreateTaskRequestPrivate
 * \brief The CreateTaskRequestPrivate class provides private implementation for CreateTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a CreateTaskRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
CreateTaskRequestPrivate::CreateTaskRequestPrivate(
    const SnowDeviceManagementRequest::Action action, CreateTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTaskRequest
 * class' copy constructor.
 */
CreateTaskRequestPrivate::CreateTaskRequestPrivate(
    const CreateTaskRequestPrivate &other, CreateTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
