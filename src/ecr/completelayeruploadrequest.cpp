// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completelayeruploadrequest.h"
#include "completelayeruploadrequest_p.h"
#include "completelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::CompleteLayerUploadRequest
 * \brief The CompleteLayerUploadRequest class provides an interface for Ecr CompleteLayerUpload requests.
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
 * \sa EcrClient::completeLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other)
    : EcrRequest(new CompleteLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteLayerUploadRequest object.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest()
    : EcrRequest(new CompleteLayerUploadRequestPrivate(EcrRequest::CompleteLayerUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CompleteLayerUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompleteLayerUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompleteLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteLayerUploadResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::CompleteLayerUploadRequestPrivate
 * \brief The CompleteLayerUploadRequestPrivate class provides private implementation for CompleteLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a CompleteLayerUploadRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const EcrRequest::Action action, CompleteLayerUploadRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompleteLayerUploadRequest
 * class' copy constructor.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const CompleteLayerUploadRequestPrivate &other, CompleteLayerUploadRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
