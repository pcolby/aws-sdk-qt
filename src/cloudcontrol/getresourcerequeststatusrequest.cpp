// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcerequeststatusrequest.h"
#include "getresourcerequeststatusrequest_p.h"
#include "getresourcerequeststatusresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::GetResourceRequestStatusRequest
 * \brief The GetResourceRequestStatusRequest class provides an interface for CloudControl GetResourceRequestStatus requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::getResourceRequestStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceRequestStatusRequest::GetResourceRequestStatusRequest(const GetResourceRequestStatusRequest &other)
    : CloudControlRequest(new GetResourceRequestStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceRequestStatusRequest object.
 */
GetResourceRequestStatusRequest::GetResourceRequestStatusRequest()
    : CloudControlRequest(new GetResourceRequestStatusRequestPrivate(CloudControlRequest::GetResourceRequestStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceRequestStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceRequestStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceRequestStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceRequestStatusResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::GetResourceRequestStatusRequestPrivate
 * \brief The GetResourceRequestStatusRequestPrivate class provides private implementation for GetResourceRequestStatusRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a GetResourceRequestStatusRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
GetResourceRequestStatusRequestPrivate::GetResourceRequestStatusRequestPrivate(
    const CloudControlRequest::Action action, GetResourceRequestStatusRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceRequestStatusRequest
 * class' copy constructor.
 */
GetResourceRequestStatusRequestPrivate::GetResourceRequestStatusRequestPrivate(
    const GetResourceRequestStatusRequestPrivate &other, GetResourceRequestStatusRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
