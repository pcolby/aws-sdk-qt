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

#include "startimagescanrequest.h"
#include "startimagescanrequest_p.h"
#include "startimagescanresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::StartImageScanRequest
 * \brief The StartImageScanRequest class provides an interface for ECR StartImageScan requests.
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
 * \sa EcrClient::startImageScan
 */

/*!
 * Constructs a copy of \a other.
 */
StartImageScanRequest::StartImageScanRequest(const StartImageScanRequest &other)
    : EcrRequest(new StartImageScanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImageScanRequest object.
 */
StartImageScanRequest::StartImageScanRequest()
    : EcrRequest(new StartImageScanRequestPrivate(EcrRequest::StartImageScanAction, this))
{

}

/*!
 * \reimp
 */
bool StartImageScanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImageScanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImageScanRequest::response(QNetworkReply * const reply) const
{
    return new StartImageScanResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::StartImageScanRequestPrivate
 * \brief The StartImageScanRequestPrivate class provides private implementation for StartImageScanRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a StartImageScanRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
StartImageScanRequestPrivate::StartImageScanRequestPrivate(
    const EcrRequest::Action action, StartImageScanRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImageScanRequest
 * class' copy constructor.
 */
StartImageScanRequestPrivate::StartImageScanRequestPrivate(
    const StartImageScanRequestPrivate &other, StartImageScanRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
