// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcerequest.h"
#include "updateresourcerequest_p.h"
#include "updateresourceresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::UpdateResourceRequest
 * \brief The UpdateResourceRequest class provides an interface for CloudControl UpdateResource requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::updateResource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceRequest::UpdateResourceRequest(const UpdateResourceRequest &other)
    : CloudControlRequest(new UpdateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceRequest object.
 */
UpdateResourceRequest::UpdateResourceRequest()
    : CloudControlRequest(new UpdateResourceRequestPrivate(CloudControlRequest::UpdateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::UpdateResourceRequestPrivate
 * \brief The UpdateResourceRequestPrivate class provides private implementation for UpdateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a UpdateResourceRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const CloudControlRequest::Action action, UpdateResourceRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceRequest
 * class' copy constructor.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const UpdateResourceRequestPrivate &other, UpdateResourceRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
