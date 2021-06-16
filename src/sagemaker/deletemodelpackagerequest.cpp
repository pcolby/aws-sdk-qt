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

#include "deletemodelpackagerequest.h"
#include "deletemodelpackagerequest_p.h"
#include "deletemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageRequest
 * \brief The DeleteModelPackageRequest class provides an interface for SageMaker DeleteModelPackage requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelPackageRequest::DeleteModelPackageRequest(const DeleteModelPackageRequest &other)
    : SageMakerRequest(new DeleteModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelPackageRequest object.
 */
DeleteModelPackageRequest::DeleteModelPackageRequest()
    : SageMakerRequest(new DeleteModelPackageRequestPrivate(SageMakerRequest::DeleteModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageRequestPrivate
 * \brief The DeleteModelPackageRequestPrivate class provides private implementation for DeleteModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelPackageRequestPrivate::DeleteModelPackageRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelPackageRequest
 * class' copy constructor.
 */
DeleteModelPackageRequestPrivate::DeleteModelPackageRequestPrivate(
    const DeleteModelPackageRequestPrivate &other, DeleteModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
