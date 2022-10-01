// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerepositoriesrequest.h"
#include "describerepositoriesrequest_p.h"
#include "describerepositoriesresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeRepositoriesRequest
 * \brief The DescribeRepositoriesRequest class provides an interface for EcrPublic DescribeRepositories requests.
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
 * \sa EcrPublicClient::describeRepositories
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest(const DescribeRepositoriesRequest &other)
    : EcrPublicRequest(new DescribeRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRepositoriesRequest object.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest()
    : EcrPublicRequest(new DescribeRepositoriesRequestPrivate(EcrPublicRequest::DescribeRepositoriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRepositoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRepositoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRepositoriesResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::DescribeRepositoriesRequestPrivate
 * \brief The DescribeRepositoriesRequestPrivate class provides private implementation for DescribeRepositoriesRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeRepositoriesRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const EcrPublicRequest::Action action, DescribeRepositoriesRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRepositoriesRequest
 * class' copy constructor.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const DescribeRepositoriesRequestPrivate &other, DescribeRepositoriesRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
