// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyrequest_p.h"
#include "getrepositorypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRepositoryPolicyRequest
 * \brief The GetRepositoryPolicyRequest class provides an interface for Ecr GetRepositoryPolicy requests.
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
 * \sa EcrClient::getRepositoryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest(const GetRepositoryPolicyRequest &other)
    : EcrRequest(new GetRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRepositoryPolicyRequest object.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest()
    : EcrRequest(new GetRepositoryPolicyRequestPrivate(EcrRequest::GetRepositoryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetRepositoryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRepositoryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::GetRepositoryPolicyRequestPrivate
 * \brief The GetRepositoryPolicyRequestPrivate class provides private implementation for GetRepositoryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRepositoryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const EcrRequest::Action action, GetRepositoryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryPolicyRequest
 * class' copy constructor.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const GetRepositoryPolicyRequestPrivate &other, GetRepositoryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
