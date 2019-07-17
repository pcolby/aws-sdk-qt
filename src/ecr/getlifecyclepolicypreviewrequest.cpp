/*
    Copyright 2013-2019 Paul Colby

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

#include "getlifecyclepolicypreviewrequest.h"
#include "getlifecyclepolicypreviewrequest_p.h"
#include "getlifecyclepolicypreviewresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetLifecyclePolicyPreviewRequest
 * \brief The GetLifecyclePolicyPreviewRequest class provides an interface for ECR GetLifecyclePolicyPreview requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::getLifecyclePolicyPreview
 */

/*!
 * Constructs a copy of \a other.
 */
GetLifecyclePolicyPreviewRequest::GetLifecyclePolicyPreviewRequest(const GetLifecyclePolicyPreviewRequest &other)
    : EcrRequest(new GetLifecyclePolicyPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLifecyclePolicyPreviewRequest object.
 */
GetLifecyclePolicyPreviewRequest::GetLifecyclePolicyPreviewRequest()
    : EcrRequest(new GetLifecyclePolicyPreviewRequestPrivate(EcrRequest::GetLifecyclePolicyPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool GetLifecyclePolicyPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLifecyclePolicyPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLifecyclePolicyPreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::GetLifecyclePolicyPreviewRequestPrivate
 * \brief The GetLifecyclePolicyPreviewRequestPrivate class provides private implementation for GetLifecyclePolicyPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a GetLifecyclePolicyPreviewRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetLifecyclePolicyPreviewRequestPrivate::GetLifecyclePolicyPreviewRequestPrivate(
    const EcrRequest::Action action, GetLifecyclePolicyPreviewRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyPreviewRequest
 * class' copy constructor.
 */
GetLifecyclePolicyPreviewRequestPrivate::GetLifecyclePolicyPreviewRequestPrivate(
    const GetLifecyclePolicyPreviewRequestPrivate &other, GetLifecyclePolicyPreviewRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
