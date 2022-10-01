// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasksrequest.h"
#include "listtasksrequest_p.h"
#include "listtasksresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListTasksRequest
 * \brief The ListTasksRequest class provides an interface for SnowDeviceManagement ListTasks requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListTasksRequest::ListTasksRequest(const ListTasksRequest &other)
    : SnowDeviceManagementRequest(new ListTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTasksRequest object.
 */
ListTasksRequest::ListTasksRequest()
    : SnowDeviceManagementRequest(new ListTasksRequestPrivate(SnowDeviceManagementRequest::ListTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListTasksResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::ListTasksRequestPrivate
 * \brief The ListTasksRequestPrivate class provides private implementation for ListTasksRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListTasksRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const SnowDeviceManagementRequest::Action action, ListTasksRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTasksRequest
 * class' copy constructor.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const ListTasksRequestPrivate &other, ListTasksRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
