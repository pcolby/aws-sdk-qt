// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
