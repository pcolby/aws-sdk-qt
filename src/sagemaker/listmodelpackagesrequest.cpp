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

#include "listmodelpackagesrequest.h"
#include "listmodelpackagesrequest_p.h"
#include "listmodelpackagesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackagesRequest
 * \brief The ListModelPackagesRequest class provides an interface for SageMaker ListModelPackages requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listModelPackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelPackagesRequest::ListModelPackagesRequest(const ListModelPackagesRequest &other)
    : SageMakerRequest(new ListModelPackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelPackagesRequest object.
 */
ListModelPackagesRequest::ListModelPackagesRequest()
    : SageMakerRequest(new ListModelPackagesRequestPrivate(SageMakerRequest::ListModelPackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelPackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelPackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelPackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListModelPackagesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelPackagesRequestPrivate
 * \brief The ListModelPackagesRequestPrivate class provides private implementation for ListModelPackagesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackagesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelPackagesRequestPrivate::ListModelPackagesRequestPrivate(
    const SageMakerRequest::Action action, ListModelPackagesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelPackagesRequest
 * class' copy constructor.
 */
ListModelPackagesRequestPrivate::ListModelPackagesRequestPrivate(
    const ListModelPackagesRequestPrivate &other, ListModelPackagesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
