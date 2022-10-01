// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadrequest_p.h"
#include "initiatelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::InitiateLayerUploadRequest
 * \brief The InitiateLayerUploadRequest class provides an interface for Ecr InitiateLayerUpload requests.
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
 * \sa EcrClient::initiateLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other)
    : EcrRequest(new InitiateLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateLayerUploadRequest object.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest()
    : EcrRequest(new InitiateLayerUploadRequestPrivate(EcrRequest::InitiateLayerUploadAction, this))
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
 * \class QtAws::Ecr::InitiateLayerUploadRequestPrivate
 * \brief The InitiateLayerUploadRequestPrivate class provides private implementation for InitiateLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a InitiateLayerUploadRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const EcrRequest::Action action, InitiateLayerUploadRequest * const q)
    : EcrRequestPrivate(action, q)
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
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
