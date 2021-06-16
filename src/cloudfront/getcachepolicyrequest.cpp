/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
