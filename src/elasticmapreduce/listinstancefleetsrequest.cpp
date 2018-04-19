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

#include "listinstancefleetsrequest.h"
#include "listinstancefleetsrequest_p.h"
#include "listinstancefleetsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListInstanceFleetsRequest
 * \brief The ListInstanceFleetsRequest class provides an interface for EMR ListInstanceFleets requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listInstanceFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest(const ListInstanceFleetsRequest &other)
    : EMRRequest(new ListInstanceFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceFleetsRequest object.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest()
    : EMRRequest(new ListInstanceFleetsRequestPrivate(EMRRequest::ListInstanceFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ListInstanceFleetsRequestPrivate
 * \brief The ListInstanceFleetsRequestPrivate class provides private implementation for ListInstanceFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListInstanceFleetsRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const EMRRequest::Action action, ListInstanceFleetsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceFleetsRequest
 * class' copy constructor.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const ListInstanceFleetsRequestPrivate &other, ListInstanceFleetsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
