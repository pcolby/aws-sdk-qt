// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingdistributionrequest.h"
#include "createstreamingdistributionrequest_p.h"
#include "createstreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionRequest
 * \brief The CreateStreamingDistributionRequest class provides an interface for CloudFront CreateStreamingDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createStreamingDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingDistributionRequest::CreateStreamingDistributionRequest(const CreateStreamingDistributionRequest &other)
    : CloudFrontRequest(new CreateStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingDistributionRequest object.
 */
CreateStreamingDistributionRequest::CreateStreamingDistributionRequest()
    : CloudFrontRequest(new CreateStreamingDistributionRequestPrivate(CloudFrontRequest::CreateStreamingDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionRequestPrivate
 * \brief The CreateStreamingDistributionRequestPrivate class provides private implementation for CreateStreamingDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateStreamingDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateStreamingDistributionRequestPrivate::CreateStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, CreateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingDistributionRequest
 * class' copy constructor.
 */
CreateStreamingDistributionRequestPrivate::CreateStreamingDistributionRequestPrivate(
    const CreateStreamingDistributionRequestPrivate &other, CreateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
