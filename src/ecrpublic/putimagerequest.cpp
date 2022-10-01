// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagerequest.h"
#include "putimagerequest_p.h"
#include "putimageresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutImageRequest
 * \brief The PutImageRequest class provides an interface for EcrPublic PutImage requests.
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
 * \sa EcrPublicClient::putImage
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageRequest::PutImageRequest(const PutImageRequest &other)
    : EcrPublicRequest(new PutImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageRequest object.
 */
PutImageRequest::PutImageRequest()
    : EcrPublicRequest(new PutImageRequestPrivate(EcrPublicRequest::PutImageAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageRequest::response(QNetworkReply * const reply) const
{
    return new PutImageResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::PutImageRequestPrivate
 * \brief The PutImageRequestPrivate class provides private implementation for PutImageRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutImageRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const EcrPublicRequest::Action action, PutImageRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageRequest
 * class' copy constructor.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const PutImageRequestPrivate &other, PutImageRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
