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

#include "createstreamingdistributionwithtagsrequest.h"
#include "createstreamingdistributionwithtagsrequest_p.h"
#include "createstreamingdistributionwithtagsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionWithTagsRequest
 * \brief The CreateStreamingDistributionWithTagsRequest class provides an interface for CloudFront CreateStreamingDistributionWithTags requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createStreamingDistributionWithTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingDistributionWithTagsRequest::CreateStreamingDistributionWithTagsRequest(const CreateStreamingDistributionWithTagsRequest &other)
    : CloudFrontRequest(new CreateStreamingDistributionWithTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingDistributionWithTagsRequest object.
 */
CreateStreamingDistributionWithTagsRequest::CreateStreamingDistributionWithTagsRequest()
    : CloudFrontRequest(new CreateStreamingDistributionWithTagsRequestPrivate(CloudFrontRequest::CreateStreamingDistributionWithTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingDistributionWithTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingDistributionWithTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingDistributionWithTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingDistributionWithTagsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionWithTagsRequestPrivate
 * \brief The CreateStreamingDistributionWithTagsRequestPrivate class provides private implementation for CreateStreamingDistributionWithTagsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a CreateStreamingDistributionWithTagsRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
CreateStreamingDistributionWithTagsRequestPrivate::CreateStreamingDistributionWithTagsRequestPrivate(
    const CloudFrontRequest::Action action, CreateStreamingDistributionWithTagsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingDistributionWithTagsRequest
 * class' copy constructor.
 */
CreateStreamingDistributionWithTagsRequestPrivate::CreateStreamingDistributionWithTagsRequestPrivate(
    const CreateStreamingDistributionWithTagsRequestPrivate &other, CreateStreamingDistributionWithTagsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
