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

#include "listalgorithmsrequest.h"
#include "listalgorithmsrequest_p.h"
#include "listalgorithmsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAlgorithmsRequest
 * \brief The ListAlgorithmsRequest class provides an interface for SageMaker ListAlgorithms requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listAlgorithms
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlgorithmsRequest::ListAlgorithmsRequest(const ListAlgorithmsRequest &other)
    : SageMakerRequest(new ListAlgorithmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlgorithmsRequest object.
 */
ListAlgorithmsRequest::ListAlgorithmsRequest()
    : SageMakerRequest(new ListAlgorithmsRequestPrivate(SageMakerRequest::ListAlgorithmsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlgorithmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlgorithmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlgorithmsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlgorithmsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAlgorithmsRequestPrivate
 * \brief The ListAlgorithmsRequestPrivate class provides private implementation for ListAlgorithmsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAlgorithmsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAlgorithmsRequestPrivate::ListAlgorithmsRequestPrivate(
    const SageMakerRequest::Action action, ListAlgorithmsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlgorithmsRequest
 * class' copy constructor.
 */
ListAlgorithmsRequestPrivate::ListAlgorithmsRequestPrivate(
    const ListAlgorithmsRequestPrivate &other, ListAlgorithmsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
