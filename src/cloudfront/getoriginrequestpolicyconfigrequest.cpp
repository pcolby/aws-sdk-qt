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

#include "getoriginrequestpolicyconfigrequest.h"
#include "getoriginrequestpolicyconfigrequest_p.h"
#include "getoriginrequestpolicyconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyConfigRequest
 * \brief The GetOriginRequestPolicyConfigRequest class provides an interface for CloudFront GetOriginRequestPolicyConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginRequestPolicyConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginRequestPolicyConfigRequest::GetOriginRequestPolicyConfigRequest(const GetOriginRequestPolicyConfigRequest &other)
    : CloudFrontRequest(new GetOriginRequestPolicyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginRequestPolicyConfigRequest object.
 */
GetOriginRequestPolicyConfigRequest::GetOriginRequestPolicyConfigRequest()
    : CloudFrontRequest(new GetOriginRequestPolicyConfigRequestPrivate(CloudFrontRequest::GetOriginRequestPolicyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginRequestPolicyConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginRequestPolicyConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginRequestPolicyConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginRequestPolicyConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginRequestPolicyConfigRequestPrivate
 * \brief The GetOriginRequestPolicyConfigRequestPrivate class provides private implementation for GetOriginRequestPolicyConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginRequestPolicyConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginRequestPolicyConfigRequestPrivate::GetOriginRequestPolicyConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginRequestPolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginRequestPolicyConfigRequest
 * class' copy constructor.
 */
GetOriginRequestPolicyConfigRequestPrivate::GetOriginRequestPolicyConfigRequestPrivate(
    const GetOriginRequestPolicyConfigRequestPrivate &other, GetOriginRequestPolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
