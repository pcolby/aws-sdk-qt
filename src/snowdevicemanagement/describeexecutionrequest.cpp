// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexecutionrequest.h"
#include "describeexecutionrequest_p.h"
#include "describeexecutionresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::DescribeExecutionRequest
 * \brief The DescribeExecutionRequest class provides an interface for SnowDeviceManagement DescribeExecution requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::describeExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExecutionRequest::DescribeExecutionRequest(const DescribeExecutionRequest &other)
    : SnowDeviceManagementRequest(new DescribeExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExecutionRequest object.
 */
DescribeExecutionRequest::DescribeExecutionRequest()
    : SnowDeviceManagementRequest(new DescribeExecutionRequestPrivate(SnowDeviceManagementRequest::DescribeExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::DescribeExecutionRequestPrivate
 * \brief The DescribeExecutionRequestPrivate class provides private implementation for DescribeExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a DescribeExecutionRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const SnowDeviceManagementRequest::Action action, DescribeExecutionRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExecutionRequest
 * class' copy constructor.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const DescribeExecutionRequestPrivate &other, DescribeExecutionRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
