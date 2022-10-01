// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionsrequest.h"
#include "listpermissionsrequest_p.h"
#include "listpermissionsresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::ListPermissionsRequest
 * \brief The ListPermissionsRequest class provides an interface for Grafana ListPermissions requests.
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
 * \sa GrafanaClient::listPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionsRequest::ListPermissionsRequest(const ListPermissionsRequest &other)
    : GrafanaRequest(new ListPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionsRequest object.
 */
ListPermissionsRequest::ListPermissionsRequest()
    : GrafanaRequest(new ListPermissionsRequestPrivate(GrafanaRequest::ListPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::ListPermissionsRequestPrivate
 * \brief The ListPermissionsRequestPrivate class provides private implementation for ListPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a ListPermissionsRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const GrafanaRequest::Action action, ListPermissionsRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionsRequest
 * class' copy constructor.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const ListPermissionsRequestPrivate &other, ListPermissionsRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws
