// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresponseheaderspolicyconfigrequest.h"
#include "getresponseheaderspolicyconfigrequest_p.h"
#include "getresponseheaderspolicyconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyConfigRequest
 * \brief The GetResponseHeadersPolicyConfigRequest class provides an interface for CloudFront GetResponseHeadersPolicyConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getResponseHeadersPolicyConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetResponseHeadersPolicyConfigRequest::GetResponseHeadersPolicyConfigRequest(const GetResponseHeadersPolicyConfigRequest &other)
    : CloudFrontRequest(new GetResponseHeadersPolicyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResponseHeadersPolicyConfigRequest object.
 */
GetResponseHeadersPolicyConfigRequest::GetResponseHeadersPolicyConfigRequest()
    : CloudFrontRequest(new GetResponseHeadersPolicyConfigRequestPrivate(CloudFrontRequest::GetResponseHeadersPolicyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetResponseHeadersPolicyConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResponseHeadersPolicyConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResponseHeadersPolicyConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetResponseHeadersPolicyConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetResponseHeadersPolicyConfigRequestPrivate
 * \brief The GetResponseHeadersPolicyConfigRequestPrivate class provides private implementation for GetResponseHeadersPolicyConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetResponseHeadersPolicyConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetResponseHeadersPolicyConfigRequestPrivate::GetResponseHeadersPolicyConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetResponseHeadersPolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResponseHeadersPolicyConfigRequest
 * class' copy constructor.
 */
GetResponseHeadersPolicyConfigRequestPrivate::GetResponseHeadersPolicyConfigRequestPrivate(
    const GetResponseHeadersPolicyConfigRequestPrivate &other, GetResponseHeadersPolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
