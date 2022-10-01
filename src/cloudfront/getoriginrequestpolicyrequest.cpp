// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoriginrequestpolicyrequest.h"
#include "getoriginrequestpolicyrequest_p.h"
#include "getoriginrequestpolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyRequest
 * \brief The GetOriginRequestPolicyRequest class provides an interface for CloudFront GetOriginRequestPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginRequestPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginRequestPolicyRequest::GetOriginRequestPolicyRequest(const GetOriginRequestPolicyRequest &other)
    : CloudFrontRequest(new GetOriginRequestPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginRequestPolicyRequest object.
 */
GetOriginRequestPolicyRequest::GetOriginRequestPolicyRequest()
    : CloudFrontRequest(new GetOriginRequestPolicyRequestPrivate(CloudFrontRequest::GetOriginRequestPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginRequestPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginRequestPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginRequestPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginRequestPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyRequestPrivate
 * \brief The GetOriginRequestPolicyRequestPrivate class provides private implementation for GetOriginRequestPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginRequestPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginRequestPolicyRequestPrivate::GetOriginRequestPolicyRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginRequestPolicyRequest
 * class' copy constructor.
 */
GetOriginRequestPolicyRequestPrivate::GetOriginRequestPolicyRequestPrivate(
    const GetOriginRequestPolicyRequestPrivate &other, GetOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
