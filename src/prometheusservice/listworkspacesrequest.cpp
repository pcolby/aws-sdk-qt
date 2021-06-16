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

#include "listworkspacesrequest.h"
#include "listworkspacesrequest_p.h"
#include "listworkspacesresponse.h"
#include "prometheusservicerequest_p.h"

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::ListWorkspacesRequest
 * \brief The ListWorkspacesRequest class provides an interface for PrometheusService ListWorkspaces requests.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::listWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkspacesRequest::ListWorkspacesRequest(const ListWorkspacesRequest &other)
    : PrometheusServiceRequest(new ListWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkspacesRequest object.
 */
ListWorkspacesRequest::ListWorkspacesRequest()
    : PrometheusServiceRequest(new ListWorkspacesRequestPrivate(PrometheusServiceRequest::ListWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::PrometheusService::ListWorkspacesRequestPrivate
 * \brief The ListWorkspacesRequestPrivate class provides private implementation for ListWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a ListWorkspacesRequestPrivate object for PrometheusService \a action,
 * with public implementation \a q.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const PrometheusServiceRequest::Action action, ListWorkspacesRequest * const q)
    : PrometheusServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkspacesRequest
 * class' copy constructor.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const ListWorkspacesRequestPrivate &other, ListWorkspacesRequest * const q)
    : PrometheusServiceRequestPrivate(other, q)
{

}

} // namespace PrometheusService
} // namespace QtAws
