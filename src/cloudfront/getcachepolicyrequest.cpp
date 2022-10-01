// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcachepolicyrequest.h"
#include "getcachepolicyrequest_p.h"
#include "getcachepolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCachePolicyRequest
 * \brief The GetCachePolicyRequest class provides an interface for CloudFront GetCachePolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCachePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetCachePolicyRequest::GetCachePolicyRequest(const GetCachePolicyRequest &other)
    : CloudFrontRequest(new GetCachePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCachePolicyRequest object.
 */
GetCachePolicyRequest::GetCachePolicyRequest()
    : CloudFrontRequest(new GetCachePolicyRequestPrivate(CloudFrontRequest::GetCachePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetCachePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCachePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCachePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetCachePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetCachePolicyRequestPrivate
 * \brief The GetCachePolicyRequestPrivate class provides private implementation for GetCachePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCachePolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetCachePolicyRequestPrivate::GetCachePolicyRequestPrivate(
    const CloudFrontRequest::Action action, GetCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCachePolicyRequest
 * class' copy constructor.
 */
GetCachePolicyRequestPrivate::GetCachePolicyRequestPrivate(
    const GetCachePolicyRequestPrivate &other, GetCachePolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
