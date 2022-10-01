// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachepolicyrequest.h"
#include "deletecachepolicyrequest_p.h"
#include "deletecachepolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteCachePolicyRequest
 * \brief The DeleteCachePolicyRequest class provides an interface for CloudFront DeleteCachePolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteCachePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCachePolicyRequest::DeleteCachePolicyRequest(const DeleteCachePolicyRequest &other)
    : CloudFrontRequest(new DeleteCachePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCachePolicyRequest object.
 */
DeleteCachePolicyRequest::DeleteCachePolicyRequest()
    : CloudFrontRequest(new DeleteCachePolicyRequestPrivate(CloudFrontRequest::DeleteCachePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCachePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCachePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCachePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCachePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteCachePolicyRequestPrivate
 * \brief The DeleteCachePolicyRequestPrivate class provides private implementation for DeleteCachePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteCachePolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteCachePolicyRequestPrivate::DeleteCachePolicyRequestPrivate(
    const CloudFrontRequest::Action action, DeleteCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCachePolicyRequest
 * class' copy constructor.
 */
DeleteCachePolicyRequestPrivate::DeleteCachePolicyRequestPrivate(
    const DeleteCachePolicyRequestPrivate &other, DeleteCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
