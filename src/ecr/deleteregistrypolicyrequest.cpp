// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistrypolicyrequest.h"
#include "deleteregistrypolicyrequest_p.h"
#include "deleteregistrypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRegistryPolicyRequest
 * \brief The DeleteRegistryPolicyRequest class provides an interface for Ecr DeleteRegistryPolicy requests.
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
 * \sa EcrClient::deleteRegistryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRegistryPolicyRequest::DeleteRegistryPolicyRequest(const DeleteRegistryPolicyRequest &other)
    : EcrRequest(new DeleteRegistryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRegistryPolicyRequest object.
 */
DeleteRegistryPolicyRequest::DeleteRegistryPolicyRequest()
    : EcrRequest(new DeleteRegistryPolicyRequestPrivate(EcrRequest::DeleteRegistryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRegistryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRegistryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRegistryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegistryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DeleteRegistryPolicyRequestPrivate
 * \brief The DeleteRegistryPolicyRequestPrivate class provides private implementation for DeleteRegistryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRegistryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DeleteRegistryPolicyRequestPrivate::DeleteRegistryPolicyRequestPrivate(
    const EcrRequest::Action action, DeleteRegistryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegistryPolicyRequest
 * class' copy constructor.
 */
DeleteRegistryPolicyRequestPrivate::DeleteRegistryPolicyRequestPrivate(
    const DeleteRegistryPolicyRequestPrivate &other, DeleteRegistryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
