/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listBootstrapActions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest(const ListBootstrapActionsRequest &other)
    : EMRRequest(new ListBootstrapActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBootstrapActionsRequest object.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest()
    : EMRRequest(new ListBootstrapActionsRequestPrivate(EMRRequest::ListBootstrapActionsAction, this))
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
 *
 * Constructs a ListBootstrapActionsRequestPrivate object for EMR \a action with,
 * public implementation \a q.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const EMRRequest::Action action, ListBootstrapActionsRequest * const q)
    : EMRRequestPrivate(action, q)
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
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
