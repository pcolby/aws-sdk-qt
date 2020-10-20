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

#include "createmodelpackagerequest.h"
#include "createmodelpackagerequest_p.h"
#include "createmodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageRequest
 * \brief The CreateModelPackageRequest class provides an interface for SageMaker CreateModelPackage requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelPackageRequest::CreateModelPackageRequest(const CreateModelPackageRequest &other)
    : SageMakerRequest(new CreateModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelPackageRequest object.
 */
CreateModelPackageRequest::CreateModelPackageRequest()
    : SageMakerRequest(new CreateModelPackageRequestPrivate(SageMakerRequest::CreateModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageRequestPrivate
 * \brief The CreateModelPackageRequestPrivate class provides private implementation for CreateModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelPackageRequestPrivate::CreateModelPackageRequestPrivate(
    const SageMakerRequest::Action action, CreateModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelPackageRequest
 * class' copy constructor.
 */
CreateModelPackageRequestPrivate::CreateModelPackageRequestPrivate(
    const CreateModelPackageRequestPrivate &other, CreateModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
