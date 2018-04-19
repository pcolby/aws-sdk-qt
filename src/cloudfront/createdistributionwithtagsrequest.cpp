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

#include "createdistributionwithtagsrequest.h"
#include "createdistributionwithtagsrequest_p.h"
#include "createdistributionwithtagsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionWithTagsRequest
 * \brief The CreateDistributionWithTagsRequest class provides an interface for CloudFront CreateDistributionWithTags requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistributionWithTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDistributionWithTagsRequest::CreateDistributionWithTagsRequest(const CreateDistributionWithTagsRequest &other)
    : CloudFrontRequest(new CreateDistributionWithTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDistributionWithTagsRequest object.
 */
CreateDistributionWithTagsRequest::CreateDistributionWithTagsRequest()
    : CloudFrontRequest(new CreateDistributionWithTagsRequestPrivate(CloudFrontRequest::CreateDistributionWithTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDistributionWithTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDistributionWithTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDistributionWithTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionWithTagsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateDistributionWithTagsRequestPrivate
 * \brief The CreateDistributionWithTagsRequestPrivate class provides private implementation for CreateDistributionWithTagsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a CreateDistributionWithTagsRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
CreateDistributionWithTagsRequestPrivate::CreateDistributionWithTagsRequestPrivate(
    const CloudFrontRequest::Action action, CreateDistributionWithTagsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionWithTagsRequest
 * class' copy constructor.
 */
CreateDistributionWithTagsRequestPrivate::CreateDistributionWithTagsRequestPrivate(
    const CreateDistributionWithTagsRequestPrivate &other, CreateDistributionWithTagsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
