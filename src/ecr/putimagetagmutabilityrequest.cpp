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

#include "putimagetagmutabilityrequest.h"
#include "putimagetagmutabilityrequest_p.h"
#include "putimagetagmutabilityresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityRequest
 * \brief The PutImageTagMutabilityRequest class provides an interface for Ecr PutImageTagMutability requests.
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
 * \sa EcrClient::putImageTagMutability
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageTagMutabilityRequest::PutImageTagMutabilityRequest(const PutImageTagMutabilityRequest &other)
    : EcrRequest(new PutImageTagMutabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageTagMutabilityRequest object.
 */
PutImageTagMutabilityRequest::PutImageTagMutabilityRequest()
    : EcrRequest(new PutImageTagMutabilityRequestPrivate(EcrRequest::PutImageTagMutabilityAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageTagMutabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageTagMutabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageTagMutabilityRequest::response(QNetworkReply * const reply) const
{
    return new PutImageTagMutabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityRequestPrivate
 * \brief The PutImageTagMutabilityRequestPrivate class provides private implementation for PutImageTagMutabilityRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageTagMutabilityRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutImageTagMutabilityRequestPrivate::PutImageTagMutabilityRequestPrivate(
    const EcrRequest::Action action, PutImageTagMutabilityRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageTagMutabilityRequest
 * class' copy constructor.
 */
PutImageTagMutabilityRequestPrivate::PutImageTagMutabilityRequestPrivate(
    const PutImageTagMutabilityRequestPrivate &other, PutImageTagMutabilityRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
