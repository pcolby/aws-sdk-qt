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
