// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedistributionrequest.h"
#include "updatedistributionrequest_p.h"
#include "updatedistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateDistributionRequest
 * \brief The UpdateDistributionRequest class provides an interface for CloudFront UpdateDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDistributionRequest::UpdateDistributionRequest(const UpdateDistributionRequest &other)
    : CloudFrontRequest(new UpdateDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDistributionRequest object.
 */
UpdateDistributionRequest::UpdateDistributionRequest()
    : CloudFrontRequest(new UpdateDistributionRequestPrivate(CloudFrontRequest::UpdateDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDistributionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateDistributionRequestPrivate
 * \brief The UpdateDistributionRequestPrivate class provides private implementation for UpdateDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateDistributionRequestPrivate::UpdateDistributionRequestPrivate(
    const CloudFrontRequest::Action action, UpdateDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDistributionRequest
 * class' copy constructor.
 */
UpdateDistributionRequestPrivate::UpdateDistributionRequestPrivate(
    const UpdateDistributionRequestPrivate &other, UpdateDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
