// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcachepolicyconfigrequest.h"
#include "getcachepolicyconfigrequest_p.h"
#include "getcachepolicyconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCachePolicyConfigRequest
 * \brief The GetCachePolicyConfigRequest class provides an interface for CloudFront GetCachePolicyConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCachePolicyConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetCachePolicyConfigRequest::GetCachePolicyConfigRequest(const GetCachePolicyConfigRequest &other)
    : CloudFrontRequest(new GetCachePolicyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCachePolicyConfigRequest object.
 */
GetCachePolicyConfigRequest::GetCachePolicyConfigRequest()
    : CloudFrontRequest(new GetCachePolicyConfigRequestPrivate(CloudFrontRequest::GetCachePolicyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetCachePolicyConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCachePolicyConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCachePolicyConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetCachePolicyConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetCachePolicyConfigRequestPrivate
 * \brief The GetCachePolicyConfigRequestPrivate class provides private implementation for GetCachePolicyConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetCachePolicyConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetCachePolicyConfigRequestPrivate::GetCachePolicyConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetCachePolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCachePolicyConfigRequest
 * class' copy constructor.
 */
GetCachePolicyConfigRequestPrivate::GetCachePolicyConfigRequestPrivate(
    const GetCachePolicyConfigRequestPrivate &other, GetCachePolicyConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
