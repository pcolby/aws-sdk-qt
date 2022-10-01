// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamingdistributionrequest.h"
#include "updatestreamingdistributionrequest_p.h"
#include "updatestreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateStreamingDistributionRequest
 * \brief The UpdateStreamingDistributionRequest class provides an interface for CloudFront UpdateStreamingDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateStreamingDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStreamingDistributionRequest::UpdateStreamingDistributionRequest(const UpdateStreamingDistributionRequest &other)
    : CloudFrontRequest(new UpdateStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStreamingDistributionRequest object.
 */
UpdateStreamingDistributionRequest::UpdateStreamingDistributionRequest()
    : CloudFrontRequest(new UpdateStreamingDistributionRequestPrivate(CloudFrontRequest::UpdateStreamingDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStreamingDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStreamingDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamingDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateStreamingDistributionRequestPrivate
 * \brief The UpdateStreamingDistributionRequestPrivate class provides private implementation for UpdateStreamingDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateStreamingDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateStreamingDistributionRequestPrivate::UpdateStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, UpdateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamingDistributionRequest
 * class' copy constructor.
 */
UpdateStreamingDistributionRequestPrivate::UpdateStreamingDistributionRequestPrivate(
    const UpdateStreamingDistributionRequestPrivate &other, UpdateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
