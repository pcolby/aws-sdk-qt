// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingdistributionconfigrequest.h"
#include "getstreamingdistributionconfigrequest_p.h"
#include "getstreamingdistributionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigRequest
 * \brief The GetStreamingDistributionConfigRequest class provides an interface for CloudFront GetStreamingDistributionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getStreamingDistributionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest(const GetStreamingDistributionConfigRequest &other)
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingDistributionConfigRequest object.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest()
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(CloudFrontRequest::GetStreamingDistributionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingDistributionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingDistributionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingDistributionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingDistributionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigRequestPrivate
 * \brief The GetStreamingDistributionConfigRequestPrivate class provides private implementation for GetStreamingDistributionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetStreamingDistributionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetStreamingDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingDistributionConfigRequest
 * class' copy constructor.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const GetStreamingDistributionConfigRequestPrivate &other, GetStreamingDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
