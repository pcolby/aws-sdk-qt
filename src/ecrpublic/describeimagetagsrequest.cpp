// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagetagsrequest.h"
#include "describeimagetagsrequest_p.h"
#include "describeimagetagsresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeImageTagsRequest
 * \brief The DescribeImageTagsRequest class provides an interface for EcrPublic DescribeImageTags requests.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::describeImageTags
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageTagsRequest::DescribeImageTagsRequest(const DescribeImageTagsRequest &other)
    : EcrPublicRequest(new DescribeImageTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageTagsRequest object.
 */
DescribeImageTagsRequest::DescribeImageTagsRequest()
    : EcrPublicRequest(new DescribeImageTagsRequestPrivate(EcrPublicRequest::DescribeImageTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageTagsResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::DescribeImageTagsRequestPrivate
 * \brief The DescribeImageTagsRequestPrivate class provides private implementation for DescribeImageTagsRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeImageTagsRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
DescribeImageTagsRequestPrivate::DescribeImageTagsRequestPrivate(
    const EcrPublicRequest::Action action, DescribeImageTagsRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageTagsRequest
 * class' copy constructor.
 */
DescribeImageTagsRequestPrivate::DescribeImageTagsRequestPrivate(
    const DescribeImageTagsRequestPrivate &other, DescribeImageTagsRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
