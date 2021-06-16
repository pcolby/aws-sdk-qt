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

#include "describeimagescanfindingsrequest.h"
#include "describeimagescanfindingsrequest_p.h"
#include "describeimagescanfindingsresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::DescribeImageScanFindingsRequest
 * \brief The DescribeImageScanFindingsRequest class provides an interface for ECR DescribeImageScanFindings requests.
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
 * \sa EcrClient::describeImageScanFindings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageScanFindingsRequest::DescribeImageScanFindingsRequest(const DescribeImageScanFindingsRequest &other)
    : EcrRequest(new DescribeImageScanFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageScanFindingsRequest object.
 */
DescribeImageScanFindingsRequest::DescribeImageScanFindingsRequest()
    : EcrRequest(new DescribeImageScanFindingsRequestPrivate(EcrRequest::DescribeImageScanFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageScanFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageScanFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageScanFindingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageScanFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::DescribeImageScanFindingsRequestPrivate
 * \brief The DescribeImageScanFindingsRequestPrivate class provides private implementation for DescribeImageScanFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a DescribeImageScanFindingsRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DescribeImageScanFindingsRequestPrivate::DescribeImageScanFindingsRequestPrivate(
    const EcrRequest::Action action, DescribeImageScanFindingsRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageScanFindingsRequest
 * class' copy constructor.
 */
DescribeImageScanFindingsRequestPrivate::DescribeImageScanFindingsRequestPrivate(
    const DescribeImageScanFindingsRequestPrivate &other, DescribeImageScanFindingsRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
