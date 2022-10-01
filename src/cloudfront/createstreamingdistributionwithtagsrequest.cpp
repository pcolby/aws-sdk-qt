// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a CreateStreamingDistributionWithTagsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
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
