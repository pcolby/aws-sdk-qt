/*
    Copyright 2013-2020 Paul Colby

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

#include "describemodelpackagerequest.h"
#include "describemodelpackagerequest_p.h"
#include "describemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageRequest
 * \brief The DescribeModelPackageRequest class provides an interface for SageMaker DescribeModelPackage requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelPackageRequest::DescribeModelPackageRequest(const DescribeModelPackageRequest &other)
    : SageMakerRequest(new DescribeModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelPackageRequest object.
 */
DescribeModelPackageRequest::DescribeModelPackageRequest()
    : SageMakerRequest(new DescribeModelPackageRequestPrivate(SageMakerRequest::DescribeModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageRequestPrivate
 * \brief The DescribeModelPackageRequestPrivate class provides private implementation for DescribeModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelPackageRequestPrivate::DescribeModelPackageRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelPackageRequest
 * class' copy constructor.
 */
DescribeModelPackageRequestPrivate::DescribeModelPackageRequestPrivate(
    const DescribeModelPackageRequestPrivate &other, DescribeModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
