// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyrequest_p.h"
#include "deletelifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteLifecyclePolicyRequest
 * \brief The DeleteLifecyclePolicyRequest class provides an interface for Ecr DeleteLifecyclePolicy requests.
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
 * \sa EcrClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other)
    : EcrRequest(new DeleteLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLifecyclePolicyRequest object.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest()
    : EcrRequest(new DeleteLifecyclePolicyRequestPrivate(EcrRequest::DeleteLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DeleteLifecyclePolicyRequestPrivate
 * \brief The DeleteLifecyclePolicyRequestPrivate class provides private implementation for DeleteLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteLifecyclePolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const EcrRequest::Action action, DeleteLifecyclePolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecyclePolicyRequest
 * class' copy constructor.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const DeleteLifecyclePolicyRequestPrivate &other, DeleteLifecyclePolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
