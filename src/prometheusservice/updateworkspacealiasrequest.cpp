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

#include "updateworkspacealiasrequest.h"
#include "updateworkspacealiasrequest_p.h"
#include "updateworkspacealiasresponse.h"
#include "prometheusservicerequest_p.h"

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::UpdateWorkspaceAliasRequest
 * \brief The UpdateWorkspaceAliasRequest class provides an interface for PrometheusService UpdateWorkspaceAlias requests.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::updateWorkspaceAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceAliasRequest::UpdateWorkspaceAliasRequest(const UpdateWorkspaceAliasRequest &other)
    : PrometheusServiceRequest(new UpdateWorkspaceAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceAliasRequest object.
 */
UpdateWorkspaceAliasRequest::UpdateWorkspaceAliasRequest()
    : PrometheusServiceRequest(new UpdateWorkspaceAliasRequestPrivate(PrometheusServiceRequest::UpdateWorkspaceAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceAliasResponse(*this, reply);
}

/*!
 * \class QtAws::PrometheusService::UpdateWorkspaceAliasRequestPrivate
 * \brief The UpdateWorkspaceAliasRequestPrivate class provides private implementation for UpdateWorkspaceAliasRequest.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a UpdateWorkspaceAliasRequestPrivate object for PrometheusService \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceAliasRequestPrivate::UpdateWorkspaceAliasRequestPrivate(
    const PrometheusServiceRequest::Action action, UpdateWorkspaceAliasRequest * const q)
    : PrometheusServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceAliasRequest
 * class' copy constructor.
 */
UpdateWorkspaceAliasRequestPrivate::UpdateWorkspaceAliasRequestPrivate(
    const UpdateWorkspaceAliasRequestPrivate &other, UpdateWorkspaceAliasRequest * const q)
    : PrometheusServiceRequestPrivate(other, q)
{

}

} // namespace PrometheusService
} // namespace QtAws
