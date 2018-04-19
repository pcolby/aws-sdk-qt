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
