// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecachepolicyrequest.h"
#include "updatecachepolicyrequest_p.h"
#include "updatecachepolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateCachePolicyRequest
 * \brief The UpdateCachePolicyRequest class provides an interface for CloudFront UpdateCachePolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateCachePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCachePolicyRequest::UpdateCachePolicyRequest(const UpdateCachePolicyRequest &other)
    : CloudFrontRequest(new UpdateCachePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCachePolicyRequest object.
 */
UpdateCachePolicyRequest::UpdateCachePolicyRequest()
    : CloudFrontRequest(new UpdateCachePolicyRequestPrivate(CloudFrontRequest::UpdateCachePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCachePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCachePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCachePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCachePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateCachePolicyRequestPrivate
 * \brief The UpdateCachePolicyRequestPrivate class provides private implementation for UpdateCachePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateCachePolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateCachePolicyRequestPrivate::UpdateCachePolicyRequestPrivate(
    const CloudFrontRequest::Action action, UpdateCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCachePolicyRequest
 * class' copy constructor.
 */
UpdateCachePolicyRequestPrivate::UpdateCachePolicyRequestPrivate(
    const UpdateCachePolicyRequestPrivate &other, UpdateCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
