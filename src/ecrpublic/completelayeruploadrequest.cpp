// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completelayeruploadrequest.h"
#include "completelayeruploadrequest_p.h"
#include "completelayeruploadresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::CompleteLayerUploadRequest
 * \brief The CompleteLayerUploadRequest class provides an interface for EcrPublic CompleteLayerUpload requests.
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
 * \sa EcrPublicClient::completeLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other)
    : EcrPublicRequest(new CompleteLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteLayerUploadRequest object.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest()
    : EcrPublicRequest(new CompleteLayerUploadRequestPrivate(EcrPublicRequest::CompleteLayerUploadAction, this))
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
 * \class QtAws::EcrPublic::CompleteLayerUploadRequestPrivate
 * \brief The CompleteLayerUploadRequestPrivate class provides private implementation for CompleteLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a CompleteLayerUploadRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const EcrPublicRequest::Action action, CompleteLayerUploadRequest * const q)
    : EcrPublicRequestPrivate(action, q)
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
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
