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

#include "listworkteamsrequest.h"
#include "listworkteamsrequest_p.h"
#include "listworkteamsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkteamsRequest
 * \brief The ListWorkteamsRequest class provides an interface for SageMaker ListWorkteams requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listWorkteams
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkteamsRequest::ListWorkteamsRequest(const ListWorkteamsRequest &other)
    : SageMakerRequest(new ListWorkteamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkteamsRequest object.
 */
ListWorkteamsRequest::ListWorkteamsRequest()
    : SageMakerRequest(new ListWorkteamsRequestPrivate(SageMakerRequest::ListWorkteamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkteamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkteamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkteamsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkteamsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListWorkteamsRequestPrivate
 * \brief The ListWorkteamsRequestPrivate class provides private implementation for ListWorkteamsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkteamsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListWorkteamsRequestPrivate::ListWorkteamsRequestPrivate(
    const SageMakerRequest::Action action, ListWorkteamsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkteamsRequest
 * class' copy constructor.
 */
ListWorkteamsRequestPrivate::ListWorkteamsRequestPrivate(
    const ListWorkteamsRequestPrivate &other, ListWorkteamsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
