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
