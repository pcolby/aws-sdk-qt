// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadrequest_p.h"
#include "initiatelayeruploadresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::InitiateLayerUploadRequest
 * \brief The InitiateLayerUploadRequest class provides an interface for EcrPublic InitiateLayerUpload requests.
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
 * \sa EcrPublicClient::initiateLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other)
    : EcrPublicRequest(new InitiateLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateLayerUploadRequest object.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest()
    : EcrPublicRequest(new InitiateLayerUploadRequestPrivate(EcrPublicRequest::InitiateLayerUploadAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateLayerUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitiateLayerUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateLayerUploadResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::InitiateLayerUploadRequestPrivate
 * \brief The InitiateLayerUploadRequestPrivate class provides private implementation for InitiateLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a InitiateLayerUploadRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const EcrPublicRequest::Action action, InitiateLayerUploadRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateLayerUploadRequest
 * class' copy constructor.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const InitiateLayerUploadRequestPrivate &other, InitiateLayerUploadRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
