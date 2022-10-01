// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetaskrequest.h"
#include "describetaskrequest_p.h"
#include "describetaskresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::DescribeTaskRequest
 * \brief The DescribeTaskRequest class provides an interface for SnowDeviceManagement DescribeTask requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::describeTask
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTaskRequest::DescribeTaskRequest(const DescribeTaskRequest &other)
    : SnowDeviceManagementRequest(new DescribeTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTaskRequest object.
 */
DescribeTaskRequest::DescribeTaskRequest()
    : SnowDeviceManagementRequest(new DescribeTaskRequestPrivate(SnowDeviceManagementRequest::DescribeTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTaskRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTaskResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::DescribeTaskRequestPrivate
 * \brief The DescribeTaskRequestPrivate class provides private implementation for DescribeTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a DescribeTaskRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
DescribeTaskRequestPrivate::DescribeTaskRequestPrivate(
    const SnowDeviceManagementRequest::Action action, DescribeTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTaskRequest
 * class' copy constructor.
 */
DescribeTaskRequestPrivate::DescribeTaskRequestPrivate(
    const DescribeTaskRequestPrivate &other, DescribeTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
