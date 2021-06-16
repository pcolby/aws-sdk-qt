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

#include "deleteworkspacerequest.h"
#include "deleteworkspacerequest_p.h"
#include "deleteworkspaceresponse.h"
#include "prometheusservicerequest_p.h"

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::DeleteWorkspaceRequest
 * \brief The DeleteWorkspaceRequest class provides an interface for PrometheusService DeleteWorkspace requests.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::deleteWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest(const DeleteWorkspaceRequest &other)
    : PrometheusServiceRequest(new DeleteWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceRequest object.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest()
    : PrometheusServiceRequest(new DeleteWorkspaceRequestPrivate(PrometheusServiceRequest::DeleteWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::PrometheusService::DeleteWorkspaceRequestPrivate
 * \brief The DeleteWorkspaceRequestPrivate class provides private implementation for DeleteWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a DeleteWorkspaceRequestPrivate object for PrometheusService \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const PrometheusServiceRequest::Action action, DeleteWorkspaceRequest * const q)
    : PrometheusServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceRequest
 * class' copy constructor.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const DeleteWorkspaceRequestPrivate &other, DeleteWorkspaceRequest * const q)
    : PrometheusServiceRequestPrivate(other, q)
{

}

} // namespace PrometheusService
} // namespace QtAws
