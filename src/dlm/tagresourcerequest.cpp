// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for Dlm TagResource requests.
 *
 * \inmodule QtAwsDlm
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your Amazon Web Services resources. You create
 *  lifecycle policies, which are used to automate operations on the specified
 * 
 *  resources>
 * 
 *  Amazon DLM supports Amazon EBS volumes and snapshots. For information about using Amazon DLM with Amazon EBS, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating the Amazon EBS Snapshot
 *  Lifecycle</a> in the <i>Amazon EC2 User
 *
 * \sa DlmClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : DlmRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : DlmRequest(new TagResourceRequestPrivate(DlmRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a TagResourceRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const DlmRequest::Action action, TagResourceRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
