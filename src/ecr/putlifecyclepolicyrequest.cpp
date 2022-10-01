// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyrequest_p.h"
#include "putlifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutLifecyclePolicyRequest
 * \brief The PutLifecyclePolicyRequest class provides an interface for Ecr PutLifecyclePolicy requests.
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
 * \sa EcrClient::putLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other)
    : EcrRequest(new PutLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLifecyclePolicyRequest object.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest()
    : EcrRequest(new PutLifecyclePolicyRequestPrivate(EcrRequest::PutLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutLifecyclePolicyRequestPrivate
 * \brief The PutLifecyclePolicyRequestPrivate class provides private implementation for PutLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutLifecyclePolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const EcrRequest::Action action, PutLifecyclePolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLifecyclePolicyRequest
 * class' copy constructor.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const PutLifecyclePolicyRequestPrivate &other, PutLifecyclePolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
