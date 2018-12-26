/*
    Copyright 2013-2018 Paul Colby

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

#include "listsubscribedworkteamsrequest.h"
#include "listsubscribedworkteamsrequest_p.h"
#include "listsubscribedworkteamsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsRequest
 * \brief The ListSubscribedWorkteamsRequest class provides an interface for SageMaker ListSubscribedWorkteams requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listSubscribedWorkteams
 */

/*!
 * Constructs a copy of \a other.
 */
ListSubscribedWorkteamsRequest::ListSubscribedWorkteamsRequest(const ListSubscribedWorkteamsRequest &other)
    : SageMakerRequest(new ListSubscribedWorkteamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSubscribedWorkteamsRequest object.
 */
ListSubscribedWorkteamsRequest::ListSubscribedWorkteamsRequest()
    : SageMakerRequest(new ListSubscribedWorkteamsRequestPrivate(SageMakerRequest::ListSubscribedWorkteamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSubscribedWorkteamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSubscribedWorkteamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscribedWorkteamsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscribedWorkteamsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListSubscribedWorkteamsRequestPrivate
 * \brief The ListSubscribedWorkteamsRequestPrivate class provides private implementation for ListSubscribedWorkteamsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListSubscribedWorkteamsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListSubscribedWorkteamsRequestPrivate::ListSubscribedWorkteamsRequestPrivate(
    const SageMakerRequest::Action action, ListSubscribedWorkteamsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSubscribedWorkteamsRequest
 * class' copy constructor.
 */
ListSubscribedWorkteamsRequestPrivate::ListSubscribedWorkteamsRequestPrivate(
    const ListSubscribedWorkteamsRequestPrivate &other, ListSubscribedWorkteamsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
