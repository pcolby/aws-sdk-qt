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

#include "listactionsrequest.h"
#include "listactionsrequest_p.h"
#include "listactionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListActionsRequest
 * \brief The ListActionsRequest class provides an interface for SageMaker ListActions requests.
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
 * \sa SageMakerClient::listActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListActionsRequest::ListActionsRequest(const ListActionsRequest &other)
    : SageMakerRequest(new ListActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListActionsRequest object.
 */
ListActionsRequest::ListActionsRequest()
    : SageMakerRequest(new ListActionsRequestPrivate(SageMakerRequest::ListActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListActionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListActionsRequestPrivate
 * \brief The ListActionsRequestPrivate class provides private implementation for ListActionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListActionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const SageMakerRequest::Action action, ListActionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListActionsRequest
 * class' copy constructor.
 */
ListActionsRequestPrivate::ListActionsRequestPrivate(
    const ListActionsRequestPrivate &other, ListActionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
