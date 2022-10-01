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
