// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingdistributionrequest.h"
#include "getstreamingdistributionrequest_p.h"
#include "getstreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionRequest
 * \brief The GetStreamingDistributionRequest class provides an interface for CloudFront GetStreamingDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getStreamingDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingDistributionRequest::GetStreamingDistributionRequest(const GetStreamingDistributionRequest &other)
    : CloudFrontRequest(new GetStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingDistributionRequest object.
 */
GetStreamingDistributionRequest::GetStreamingDistributionRequest()
    : CloudFrontRequest(new GetStreamingDistributionRequestPrivate(CloudFrontRequest::GetStreamingDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionRequestPrivate
 * \brief The GetStreamingDistributionRequestPrivate class provides private implementation for GetStreamingDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetStreamingDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetStreamingDistributionRequestPrivate::GetStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, GetStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingDistributionRequest
 * class' copy constructor.
 */
GetStreamingDistributionRequestPrivate::GetStreamingDistributionRequestPrivate(
    const GetStreamingDistributionRequestPrivate &other, GetStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
