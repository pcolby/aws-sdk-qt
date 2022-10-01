// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositorypolicyrequest.h"
#include "deleterepositorypolicyrequest_p.h"
#include "deleterepositorypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRepositoryPolicyRequest
 * \brief The DeleteRepositoryPolicyRequest class provides an interface for Ecr DeleteRepositoryPolicy requests.
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
 * \sa EcrClient::deleteRepositoryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRepositoryPolicyRequest::DeleteRepositoryPolicyRequest(const DeleteRepositoryPolicyRequest &other)
    : EcrRequest(new DeleteRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRepositoryPolicyRequest object.
 */
DeleteRepositoryPolicyRequest::DeleteRepositoryPolicyRequest()
    : EcrRequest(new DeleteRepositoryPolicyRequestPrivate(EcrRequest::DeleteRepositoryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRepositoryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRepositoryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DeleteRepositoryPolicyRequestPrivate
 * \brief The DeleteRepositoryPolicyRequestPrivate class provides private implementation for DeleteRepositoryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRepositoryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DeleteRepositoryPolicyRequestPrivate::DeleteRepositoryPolicyRequestPrivate(
    const EcrRequest::Action action, DeleteRepositoryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryPolicyRequest
 * class' copy constructor.
 */
DeleteRepositoryPolicyRequestPrivate::DeleteRepositoryPolicyRequestPrivate(
    const DeleteRepositoryPolicyRequestPrivate &other, DeleteRepositoryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
