// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetimagerequest.h"
#include "batchgetimagerequest_p.h"
#include "batchgetimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchGetImageRequest
 * \brief The BatchGetImageRequest class provides an interface for Ecr BatchGetImage requests.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::batchGetImage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetImageRequest::BatchGetImageRequest(const BatchGetImageRequest &other)
    : EcrRequest(new BatchGetImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetImageRequest object.
 */
BatchGetImageRequest::BatchGetImageRequest()
    : EcrRequest(new BatchGetImageRequestPrivate(EcrRequest::BatchGetImageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetImageResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::BatchGetImageRequestPrivate
 * \brief The BatchGetImageRequestPrivate class provides private implementation for BatchGetImageRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchGetImageRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const EcrRequest::Action action, BatchGetImageRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetImageRequest
 * class' copy constructor.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const BatchGetImageRequestPrivate &other, BatchGetImageRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
