// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresponseheaderspolicyrequest.h"
#include "updateresponseheaderspolicyrequest_p.h"
#include "updateresponseheaderspolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateResponseHeadersPolicyRequest
 * \brief The UpdateResponseHeadersPolicyRequest class provides an interface for CloudFront UpdateResponseHeadersPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateResponseHeadersPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResponseHeadersPolicyRequest::UpdateResponseHeadersPolicyRequest(const UpdateResponseHeadersPolicyRequest &other)
    : CloudFrontRequest(new UpdateResponseHeadersPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResponseHeadersPolicyRequest object.
 */
UpdateResponseHeadersPolicyRequest::UpdateResponseHeadersPolicyRequest()
    : CloudFrontRequest(new UpdateResponseHeadersPolicyRequestPrivate(CloudFrontRequest::UpdateResponseHeadersPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResponseHeadersPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResponseHeadersPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResponseHeadersPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResponseHeadersPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateResponseHeadersPolicyRequestPrivate
 * \brief The UpdateResponseHeadersPolicyRequestPrivate class provides private implementation for UpdateResponseHeadersPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateResponseHeadersPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateResponseHeadersPolicyRequestPrivate::UpdateResponseHeadersPolicyRequestPrivate(
    const CloudFrontRequest::Action action, UpdateResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResponseHeadersPolicyRequest
 * class' copy constructor.
 */
UpdateResponseHeadersPolicyRequestPrivate::UpdateResponseHeadersPolicyRequestPrivate(
    const UpdateResponseHeadersPolicyRequestPrivate &other, UpdateResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
