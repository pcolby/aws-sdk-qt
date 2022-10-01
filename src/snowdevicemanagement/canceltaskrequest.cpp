// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceltaskrequest.h"
#include "canceltaskrequest_p.h"
#include "canceltaskresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::CancelTaskRequest
 * \brief The CancelTaskRequest class provides an interface for SnowDeviceManagement CancelTask requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::cancelTask
 */

/*!
 * Constructs a copy of \a other.
 */
CancelTaskRequest::CancelTaskRequest(const CancelTaskRequest &other)
    : SnowDeviceManagementRequest(new CancelTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelTaskRequest object.
 */
CancelTaskRequest::CancelTaskRequest()
    : SnowDeviceManagementRequest(new CancelTaskRequestPrivate(SnowDeviceManagementRequest::CancelTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CancelTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelTaskResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::CancelTaskRequestPrivate
 * \brief The CancelTaskRequestPrivate class provides private implementation for CancelTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a CancelTaskRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
CancelTaskRequestPrivate::CancelTaskRequestPrivate(
    const SnowDeviceManagementRequest::Action action, CancelTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelTaskRequest
 * class' copy constructor.
 */
CancelTaskRequestPrivate::CancelTaskRequestPrivate(
    const CancelTaskRequestPrivate &other, CancelTaskRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
