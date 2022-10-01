// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcerequest.h"
#include "getresourcerequest_p.h"
#include "getresourceresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::GetResourceRequest
 * \brief The GetResourceRequest class provides an interface for CloudControl GetResource requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::getResource
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceRequest::GetResourceRequest(const GetResourceRequest &other)
    : CloudControlRequest(new GetResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceRequest object.
 */
GetResourceRequest::GetResourceRequest()
    : CloudControlRequest(new GetResourceRequestPrivate(CloudControlRequest::GetResourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::GetResourceRequestPrivate
 * \brief The GetResourceRequestPrivate class provides private implementation for GetResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a GetResourceRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const CloudControlRequest::Action action, GetResourceRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceRequest
 * class' copy constructor.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const GetResourceRequestPrivate &other, GetResourceRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
