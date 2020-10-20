/*
    Copyright 2013-2020 Paul Colby

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

#include "getcloudfrontoriginaccessidentityrequest.h"
#include "getcloudfrontoriginaccessidentityrequest_p.h"
#include "getcloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityRequest
 * \brief The GetCloudFrontOriginAccessIdentityRequest class provides an interface for CloudFront GetCloudFrontOriginAccessIdentity requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
GetCloudFrontOriginAccessIdentityRequest::GetCloudFrontOriginAccessIdentityRequest(const GetCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityRequest object.
 */
GetCloudFrontOriginAccessIdentityRequest::GetCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::GetCloudFrontOriginAccessIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool GetCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCloudFrontOriginAccessIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityRequestPrivate
 * \brief The GetCloudFrontOriginAccessIdentityRequestPrivate class provides private implementation for GetCloudFrontOriginAccessIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetCloudFrontOriginAccessIdentityRequestPrivate::GetCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, GetCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 */
GetCloudFrontOriginAccessIdentityRequestPrivate::GetCloudFrontOriginAccessIdentityRequestPrivate(
    const GetCloudFrontOriginAccessIdentityRequestPrivate &other, GetCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
