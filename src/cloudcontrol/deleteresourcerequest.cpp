// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcerequest.h"
#include "deleteresourcerequest_p.h"
#include "deleteresourceresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::DeleteResourceRequest
 * \brief The DeleteResourceRequest class provides an interface for CloudControl DeleteResource requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::deleteResource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceRequest::DeleteResourceRequest(const DeleteResourceRequest &other)
    : CloudControlRequest(new DeleteResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceRequest object.
 */
DeleteResourceRequest::DeleteResourceRequest()
    : CloudControlRequest(new DeleteResourceRequestPrivate(CloudControlRequest::DeleteResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::DeleteResourceRequestPrivate
 * \brief The DeleteResourceRequestPrivate class provides private implementation for DeleteResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a DeleteResourceRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
DeleteResourceRequestPrivate::DeleteResourceRequestPrivate(
    const CloudControlRequest::Action action, DeleteResourceRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceRequest
 * class' copy constructor.
 */
DeleteResourceRequestPrivate::DeleteResourceRequestPrivate(
    const DeleteResourceRequestPrivate &other, DeleteResourceRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
