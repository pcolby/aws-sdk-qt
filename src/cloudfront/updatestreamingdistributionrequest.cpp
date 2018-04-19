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
