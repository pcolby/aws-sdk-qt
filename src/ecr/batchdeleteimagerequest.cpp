// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleteimagerequest.h"
#include "batchdeleteimagerequest_p.h"
#include "batchdeleteimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchDeleteImageRequest
 * \brief The BatchDeleteImageRequest class provides an interface for Ecr BatchDeleteImage requests.
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
 * \sa EcrClient::batchDeleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest(const BatchDeleteImageRequest &other)
    : EcrRequest(new BatchDeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteImageRequest object.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest()
    : EcrRequest(new BatchDeleteImageRequestPrivate(EcrRequest::BatchDeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::BatchDeleteImageRequestPrivate
 * \brief The BatchDeleteImageRequestPrivate class provides private implementation for BatchDeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchDeleteImageRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const EcrRequest::Action action, BatchDeleteImageRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteImageRequest
 * class' copy constructor.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const BatchDeleteImageRequestPrivate &other, BatchDeleteImageRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
