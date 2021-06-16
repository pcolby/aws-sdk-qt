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

#include "listappimageconfigsrequest.h"
#include "listappimageconfigsrequest_p.h"
#include "listappimageconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsRequest
 * \brief The ListAppImageConfigsRequest class provides an interface for SageMaker ListAppImageConfigs requests.
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
 * \sa SageMakerClient::listAppImageConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppImageConfigsRequest::ListAppImageConfigsRequest(const ListAppImageConfigsRequest &other)
    : SageMakerRequest(new ListAppImageConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppImageConfigsRequest object.
 */
ListAppImageConfigsRequest::ListAppImageConfigsRequest()
    : SageMakerRequest(new ListAppImageConfigsRequestPrivate(SageMakerRequest::ListAppImageConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppImageConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppImageConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppImageConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppImageConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAppImageConfigsRequestPrivate
 * \brief The ListAppImageConfigsRequestPrivate class provides private implementation for ListAppImageConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAppImageConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAppImageConfigsRequestPrivate::ListAppImageConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListAppImageConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppImageConfigsRequest
 * class' copy constructor.
 */
ListAppImageConfigsRequestPrivate::ListAppImageConfigsRequestPrivate(
    const ListAppImageConfigsRequestPrivate &other, ListAppImageConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
