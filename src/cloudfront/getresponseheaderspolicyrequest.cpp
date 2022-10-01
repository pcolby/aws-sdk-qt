// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresponseheaderspolicyrequest.h"
#include "getresponseheaderspolicyrequest_p.h"
#include "getresponseheaderspolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyRequest
 * \brief The GetResponseHeadersPolicyRequest class provides an interface for CloudFront GetResponseHeadersPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getResponseHeadersPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetResponseHeadersPolicyRequest::GetResponseHeadersPolicyRequest(const GetResponseHeadersPolicyRequest &other)
    : CloudFrontRequest(new GetResponseHeadersPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResponseHeadersPolicyRequest object.
 */
GetResponseHeadersPolicyRequest::GetResponseHeadersPolicyRequest()
    : CloudFrontRequest(new GetResponseHeadersPolicyRequestPrivate(CloudFrontRequest::GetResponseHeadersPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetResponseHeadersPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResponseHeadersPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResponseHeadersPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetResponseHeadersPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyRequestPrivate
 * \brief The GetResponseHeadersPolicyRequestPrivate class provides private implementation for GetResponseHeadersPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetResponseHeadersPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetResponseHeadersPolicyRequestPrivate::GetResponseHeadersPolicyRequestPrivate(
    const CloudFrontRequest::Action action, GetResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResponseHeadersPolicyRequest
 * class' copy constructor.
 */
GetResponseHeadersPolicyRequestPrivate::GetResponseHeadersPolicyRequestPrivate(
    const GetResponseHeadersPolicyRequestPrivate &other, GetResponseHeadersPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
