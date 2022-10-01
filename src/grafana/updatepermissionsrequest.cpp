// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepermissionsrequest.h"
#include "updatepermissionsrequest_p.h"
#include "updatepermissionsresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdatePermissionsRequest
 * \brief The UpdatePermissionsRequest class provides an interface for Grafana UpdatePermissions requests.
 *
 * \inmodule QtAwsGrafana
 *
 *  Amazon Managed Grafana is a fully managed and secure data visualization service that you can use to instantly query,
 *  correlate, and visualize operational metrics, logs, and traces from multiple sources. Amazon Managed Grafana makes it
 *  easy to deploy, operate, and scale Grafana, a widely deployed data visualization tool that is popular for its extensible
 *  data
 * 
 *  support>
 * 
 *  With Amazon Managed Grafana, you create logically isolated Grafana servers called <i>workspaces</i>. In a workspace, you
 *  can create Grafana dashboards and visualizations to analyze your metrics, logs, and traces without having to build,
 *  package, or deploy any hardware to run Grafana servers.
 *
 * \sa GrafanaClient::updatePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePermissionsRequest::UpdatePermissionsRequest(const UpdatePermissionsRequest &other)
    : GrafanaRequest(new UpdatePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePermissionsRequest object.
 */
UpdatePermissionsRequest::UpdatePermissionsRequest()
    : GrafanaRequest(new UpdatePermissionsRequestPrivate(GrafanaRequest::UpdatePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::UpdatePermissionsRequestPrivate
 * \brief The UpdatePermissionsRequestPrivate class provides private implementation for UpdatePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdatePermissionsRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
UpdatePermissionsRequestPrivate::UpdatePermissionsRequestPrivate(
    const GrafanaRequest::Action action, UpdatePermissionsRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePermissionsRequest
 * class' copy constructor.
 */
UpdatePermissionsRequestPrivate::UpdatePermissionsRequestPrivate(
    const UpdatePermissionsRequestPrivate &other, UpdatePermissionsRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws
