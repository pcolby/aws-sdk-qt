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

#include "listpipelinesrequest.h"
#include "listpipelinesrequest_p.h"
#include "listpipelinesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelinesRequest
 * \brief The ListPipelinesRequest class provides an interface for SageMaker ListPipelines requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listPipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListPipelinesRequest::ListPipelinesRequest(const ListPipelinesRequest &other)
    : SageMakerRequest(new ListPipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPipelinesRequest object.
 */
ListPipelinesRequest::ListPipelinesRequest()
    : SageMakerRequest(new ListPipelinesRequestPrivate(SageMakerRequest::ListPipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListPipelinesRequestPrivate
 * \brief The ListPipelinesRequestPrivate class provides private implementation for ListPipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelinesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const SageMakerRequest::Action action, ListPipelinesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPipelinesRequest
 * class' copy constructor.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ListPipelinesRequestPrivate &other, ListPipelinesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
