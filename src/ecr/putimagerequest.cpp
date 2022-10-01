// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagerequest.h"
#include "putimagerequest_p.h"
#include "putimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageRequest
 * \brief The PutImageRequest class provides an interface for Ecr PutImage requests.
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
 * \sa EcrClient::putImage
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageRequest::PutImageRequest(const PutImageRequest &other)
    : EcrRequest(new PutImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageRequest object.
 */
PutImageRequest::PutImageRequest()
    : EcrRequest(new PutImageRequestPrivate(EcrRequest::PutImageAction, this))
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
 * \class QtAws::Ecr::PutImageRequestPrivate
 * \brief The PutImageRequestPrivate class provides private implementation for PutImageRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const EcrRequest::Action action, PutImageRequest * const q)
    : EcrRequestPrivate(action, q)
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
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
