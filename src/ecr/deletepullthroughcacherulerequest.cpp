// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepullthroughcacherulerequest.h"
#include "deletepullthroughcacherulerequest_p.h"
#include "deletepullthroughcacheruleresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeletePullThroughCacheRuleRequest
 * \brief The DeletePullThroughCacheRuleRequest class provides an interface for Ecr DeletePullThroughCacheRule requests.
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
 * \sa EcrClient::deletePullThroughCacheRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePullThroughCacheRuleRequest::DeletePullThroughCacheRuleRequest(const DeletePullThroughCacheRuleRequest &other)
    : EcrRequest(new DeletePullThroughCacheRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePullThroughCacheRuleRequest object.
 */
DeletePullThroughCacheRuleRequest::DeletePullThroughCacheRuleRequest()
    : EcrRequest(new DeletePullThroughCacheRuleRequestPrivate(EcrRequest::DeletePullThroughCacheRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePullThroughCacheRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePullThroughCacheRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePullThroughCacheRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeletePullThroughCacheRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DeletePullThroughCacheRuleRequestPrivate
 * \brief The DeletePullThroughCacheRuleRequestPrivate class provides private implementation for DeletePullThroughCacheRuleRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeletePullThroughCacheRuleRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DeletePullThroughCacheRuleRequestPrivate::DeletePullThroughCacheRuleRequestPrivate(
    const EcrRequest::Action action, DeletePullThroughCacheRuleRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePullThroughCacheRuleRequest
 * class' copy constructor.
 */
DeletePullThroughCacheRuleRequestPrivate::DeletePullThroughCacheRuleRequestPrivate(
    const DeletePullThroughCacheRuleRequestPrivate &other, DeletePullThroughCacheRuleRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
