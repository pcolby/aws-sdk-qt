// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistrypolicyrequest.h"
#include "getregistrypolicyrequest_p.h"
#include "getregistrypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRegistryPolicyRequest
 * \brief The GetRegistryPolicyRequest class provides an interface for Ecr GetRegistryPolicy requests.
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
 * \sa EcrClient::getRegistryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryPolicyRequest::GetRegistryPolicyRequest(const GetRegistryPolicyRequest &other)
    : EcrRequest(new GetRegistryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryPolicyRequest object.
 */
GetRegistryPolicyRequest::GetRegistryPolicyRequest()
    : EcrRequest(new GetRegistryPolicyRequestPrivate(EcrRequest::GetRegistryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::GetRegistryPolicyRequestPrivate
 * \brief The GetRegistryPolicyRequestPrivate class provides private implementation for GetRegistryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRegistryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetRegistryPolicyRequestPrivate::GetRegistryPolicyRequestPrivate(
    const EcrRequest::Action action, GetRegistryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryPolicyRequest
 * class' copy constructor.
 */
GetRegistryPolicyRequestPrivate::GetRegistryPolicyRequestPrivate(
    const GetRegistryPolicyRequestPrivate &other, GetRegistryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
