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

#include "startlifecyclepolicypreviewrequest.h"
#include "startlifecyclepolicypreviewrequest_p.h"
#include "startlifecyclepolicypreviewresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::StartLifecyclePolicyPreviewRequest
 * \brief The StartLifecyclePolicyPreviewRequest class provides an interface for ECR StartLifecyclePolicyPreview requests.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
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
 * \class QtAws::ECR::StartLifecyclePolicyPreviewRequestPrivate
 * \brief The StartLifecyclePolicyPreviewRequestPrivate class provides private implementation for StartLifecyclePolicyPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsECR
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

} // namespace ECR
} // namespace QtAws
