// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateoriginrequestpolicyrequest.h"
#include "updateoriginrequestpolicyrequest_p.h"
#include "updateoriginrequestpolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateOriginRequestPolicyRequest
 * \brief The UpdateOriginRequestPolicyRequest class provides an interface for CloudFront UpdateOriginRequestPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateOriginRequestPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOriginRequestPolicyRequest::UpdateOriginRequestPolicyRequest(const UpdateOriginRequestPolicyRequest &other)
    : CloudFrontRequest(new UpdateOriginRequestPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOriginRequestPolicyRequest object.
 */
UpdateOriginRequestPolicyRequest::UpdateOriginRequestPolicyRequest()
    : CloudFrontRequest(new UpdateOriginRequestPolicyRequestPrivate(CloudFrontRequest::UpdateOriginRequestPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOriginRequestPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOriginRequestPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOriginRequestPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOriginRequestPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateOriginRequestPolicyRequestPrivate
 * \brief The UpdateOriginRequestPolicyRequestPrivate class provides private implementation for UpdateOriginRequestPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateOriginRequestPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateOriginRequestPolicyRequestPrivate::UpdateOriginRequestPolicyRequestPrivate(
    const CloudFrontRequest::Action action, UpdateOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOriginRequestPolicyRequest
 * class' copy constructor.
 */
UpdateOriginRequestPolicyRequestPrivate::UpdateOriginRequestPolicyRequestPrivate(
    const UpdateOriginRequestPolicyRequestPrivate &other, UpdateOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
