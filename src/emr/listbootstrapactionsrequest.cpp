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

#include "listbootstrapactionsrequest.h"
#include "listbootstrapactionsrequest_p.h"
#include "listbootstrapactionsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListBootstrapActionsRequest
 * \brief The ListBootstrapActionsRequest class provides an interface for EMR ListBootstrapActions requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listBootstrapActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest(const ListBootstrapActionsRequest &other)
    : EmrRequest(new ListBootstrapActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBootstrapActionsRequest object.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest()
    : EmrRequest(new ListBootstrapActionsRequestPrivate(EmrRequest::ListBootstrapActionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBootstrapActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBootstrapActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBootstrapActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBootstrapActionsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ListBootstrapActionsRequestPrivate
 * \brief The ListBootstrapActionsRequestPrivate class provides private implementation for ListBootstrapActionsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListBootstrapActionsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const EmrRequest::Action action, ListBootstrapActionsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBootstrapActionsRequest
 * class' copy constructor.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const ListBootstrapActionsRequestPrivate &other, ListBootstrapActionsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
