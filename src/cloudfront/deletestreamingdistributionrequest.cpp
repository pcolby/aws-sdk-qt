// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingdistributionrequest.h"
#include "deletestreamingdistributionrequest_p.h"
#include "deletestreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteStreamingDistributionRequest
 * \brief The DeleteStreamingDistributionRequest class provides an interface for CloudFront DeleteStreamingDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteStreamingDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamingDistributionRequest::DeleteStreamingDistributionRequest(const DeleteStreamingDistributionRequest &other)
    : CloudFrontRequest(new DeleteStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamingDistributionRequest object.
 */
DeleteStreamingDistributionRequest::DeleteStreamingDistributionRequest()
    : CloudFrontRequest(new DeleteStreamingDistributionRequestPrivate(CloudFrontRequest::DeleteStreamingDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamingDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamingDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamingDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteStreamingDistributionRequestPrivate
 * \brief The DeleteStreamingDistributionRequestPrivate class provides private implementation for DeleteStreamingDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteStreamingDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteStreamingDistributionRequestPrivate::DeleteStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamingDistributionRequest
 * class' copy constructor.
 */
DeleteStreamingDistributionRequestPrivate::DeleteStreamingDistributionRequestPrivate(
    const DeleteStreamingDistributionRequestPrivate &other, DeleteStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
