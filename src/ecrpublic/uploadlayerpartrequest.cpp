// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadlayerpartrequest.h"
#include "uploadlayerpartrequest_p.h"
#include "uploadlayerpartresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::UploadLayerPartRequest
 * \brief The UploadLayerPartRequest class provides an interface for EcrPublic UploadLayerPart requests.
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
 * \sa EcrPublicClient::uploadLayerPart
 */

/*!
 * Constructs a copy of \a other.
 */
UploadLayerPartRequest::UploadLayerPartRequest(const UploadLayerPartRequest &other)
    : EcrPublicRequest(new UploadLayerPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadLayerPartRequest object.
 */
UploadLayerPartRequest::UploadLayerPartRequest()
    : EcrPublicRequest(new UploadLayerPartRequestPrivate(EcrPublicRequest::UploadLayerPartAction, this))
{

}

/*!
 * \reimp
 */
bool UploadLayerPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadLayerPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadLayerPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadLayerPartResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::UploadLayerPartRequestPrivate
 * \brief The UploadLayerPartRequestPrivate class provides private implementation for UploadLayerPartRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a UploadLayerPartRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const EcrPublicRequest::Action action, UploadLayerPartRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadLayerPartRequest
 * class' copy constructor.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const UploadLayerPartRequestPrivate &other, UploadLayerPartRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
