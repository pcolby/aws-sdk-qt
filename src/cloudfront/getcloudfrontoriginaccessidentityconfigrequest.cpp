/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcloudfrontoriginaccessidentityconfigrequest.h"
#include "getcloudfrontoriginaccessidentityconfigrequest_p.h"
#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityConfigRequest
 * \brief The GetCloudFrontOriginAccessIdentityConfigRequest class provides an interface for CloudFront GetCloudFrontOriginAccessIdentityConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCloudFrontOriginAccessIdentityConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetCloudFrontOriginAccessIdentityConfigRequest::GetCloudFrontOriginAccessIdentityConfigRequest(const GetCloudFrontOriginAccessIdentityConfigRequest &other)
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityConfigRequest object.
 */
GetCloudFrontOriginAccessIdentityConfigRequest::GetCloudFrontOriginAccessIdentityConfigRequest()
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityConfigRequestPrivate(CloudFrontRequest::GetCloudFrontOriginAccessIdentityConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetCloudFrontOriginAccessIdentityConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCloudFrontOriginAccessIdentityConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCloudFrontOriginAccessIdentityConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetCloudFrontOriginAccessIdentityConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityConfigRequestPrivate
 * \brief The GetCloudFrontOriginAccessIdentityConfigRequestPrivate class provides private implementation for GetCloudFrontOriginAccessIdentityConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCloudFrontOriginAccessIdentityConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetCloudFrontOriginAccessIdentityConfigRequestPrivate::GetCloudFrontOriginAccessIdentityConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetCloudFrontOriginAccessIdentityConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCloudFrontOriginAccessIdentityConfigRequest
 * class' copy constructor.
 */
GetCloudFrontOriginAccessIdentityConfigRequestPrivate::GetCloudFrontOriginAccessIdentityConfigRequestPrivate(
    const GetCloudFrontOriginAccessIdentityConfigRequestPrivate &other, GetCloudFrontOriginAccessIdentityConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
