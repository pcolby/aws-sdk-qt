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

#include "listplacementsrequest.h"
#include "listplacementsrequest_p.h"
#include "listplacementsresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::ListPlacementsRequest
 * \brief The ListPlacementsRequest class provides an interface for IoT1ClickProjects ListPlacements requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::listPlacements
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlacementsRequest::ListPlacementsRequest(const ListPlacementsRequest &other)
    : IoT1ClickProjectsRequest(new ListPlacementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlacementsRequest object.
 */
ListPlacementsRequest::ListPlacementsRequest()
    : IoT1ClickProjectsRequest(new ListPlacementsRequestPrivate(IoT1ClickProjectsRequest::ListPlacementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPlacementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPlacementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPlacementsRequest::response(QNetworkReply * const reply) const
{
    return new ListPlacementsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::ListPlacementsRequestPrivate
 * \brief The ListPlacementsRequestPrivate class provides private implementation for ListPlacementsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a ListPlacementsRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
ListPlacementsRequestPrivate::ListPlacementsRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, ListPlacementsRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPlacementsRequest
 * class' copy constructor.
 */
ListPlacementsRequestPrivate::ListPlacementsRequestPrivate(
    const ListPlacementsRequestPrivate &other, ListPlacementsRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
