/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putregistrypolicyrequest.h"
#include "putregistrypolicyrequest_p.h"
#include "putregistrypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutRegistryPolicyRequest
 * \brief The PutRegistryPolicyRequest class provides an interface for Ecr PutRegistryPolicy requests.
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
 * \sa EcrClient::putRegistryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutRegistryPolicyRequest::PutRegistryPolicyRequest(const PutRegistryPolicyRequest &other)
    : EcrRequest(new PutRegistryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRegistryPolicyRequest object.
 */
PutRegistryPolicyRequest::PutRegistryPolicyRequest()
    : EcrRequest(new PutRegistryPolicyRequestPrivate(EcrRequest::PutRegistryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutRegistryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRegistryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRegistryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRegistryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutRegistryPolicyRequestPrivate
 * \brief The PutRegistryPolicyRequestPrivate class provides private implementation for PutRegistryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutRegistryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutRegistryPolicyRequestPrivate::PutRegistryPolicyRequestPrivate(
    const EcrRequest::Action action, PutRegistryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRegistryPolicyRequest
 * class' copy constructor.
 */
PutRegistryPolicyRequestPrivate::PutRegistryPolicyRequestPrivate(
    const PutRegistryPolicyRequestPrivate &other, PutRegistryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
