// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startlifecyclepolicypreviewrequest.h"
#include "startlifecyclepolicypreviewrequest_p.h"
#include "startlifecyclepolicypreviewresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::StartLifecyclePolicyPreviewRequest
 * \brief The StartLifecyclePolicyPreviewRequest class provides an interface for Ecr StartLifecyclePolicyPreview requests.
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
 * \sa EcrClient::startLifecyclePolicyPreview
 */

/*!
 * Constructs a copy of \a other.
 */
StartLifecyclePolicyPreviewRequest::StartLifecyclePolicyPreviewRequest(const StartLifecyclePolicyPreviewRequest &other)
    : EcrRequest(new StartLifecyclePolicyPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartLifecyclePolicyPreviewRequest object.
 */
StartLifecyclePolicyPreviewRequest::StartLifecyclePolicyPreviewRequest()
    : EcrRequest(new StartLifecyclePolicyPreviewRequestPrivate(EcrRequest::StartLifecyclePolicyPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool StartLifecyclePolicyPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartLifecyclePolicyPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLifecyclePolicyPreviewRequest::response(QNetworkReply * const reply) const
{
    return new StartLifecyclePolicyPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::StartLifecyclePolicyPreviewRequestPrivate
 * \brief The StartLifecyclePolicyPreviewRequestPrivate class provides private implementation for StartLifecyclePolicyPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a StartLifecyclePolicyPreviewRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
StartLifecyclePolicyPreviewRequestPrivate::StartLifecyclePolicyPreviewRequestPrivate(
    const EcrRequest::Action action, StartLifecyclePolicyPreviewRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartLifecyclePolicyPreviewRequest
 * class' copy constructor.
 */
StartLifecyclePolicyPreviewRequestPrivate::StartLifecyclePolicyPreviewRequestPrivate(
    const StartLifecyclePolicyPreviewRequestPrivate &other, StartLifecyclePolicyPreviewRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
