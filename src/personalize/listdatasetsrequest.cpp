/*
    Copyright 2013-2020 Paul Colby

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

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetsRequest
 * \brief The ListDatasetsRequest class provides an interface for Personalize ListDatasets requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : PersonalizeRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : PersonalizeRequest(new ListDatasetsRequestPrivate(PersonalizeRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListDatasetsRequestPrivate
 * \brief The ListDatasetsRequestPrivate class provides private implementation for ListDatasetsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const PersonalizeRequest::Action action, ListDatasetsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
