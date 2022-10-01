// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspaceapikeyrequest.h"
#include "deleteworkspaceapikeyrequest_p.h"
#include "deleteworkspaceapikeyresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DeleteWorkspaceApiKeyRequest
 * \brief The DeleteWorkspaceApiKeyRequest class provides an interface for Grafana DeleteWorkspaceApiKey requests.
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
 * \sa GrafanaClient::deleteWorkspaceApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceApiKeyRequest::DeleteWorkspaceApiKeyRequest(const DeleteWorkspaceApiKeyRequest &other)
    : GrafanaRequest(new DeleteWorkspaceApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceApiKeyRequest object.
 */
DeleteWorkspaceApiKeyRequest::DeleteWorkspaceApiKeyRequest()
    : GrafanaRequest(new DeleteWorkspaceApiKeyRequestPrivate(GrafanaRequest::DeleteWorkspaceApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::DeleteWorkspaceApiKeyRequestPrivate
 * \brief The DeleteWorkspaceApiKeyRequestPrivate class provides private implementation for DeleteWorkspaceApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DeleteWorkspaceApiKeyRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceApiKeyRequestPrivate::DeleteWorkspaceApiKeyRequestPrivate(
    const GrafanaRequest::Action action, DeleteWorkspaceApiKeyRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceApiKeyRequest
 * class' copy constructor.
 */
DeleteWorkspaceApiKeyRequestPrivate::DeleteWorkspaceApiKeyRequestPrivate(
    const DeleteWorkspaceApiKeyRequestPrivate &other, DeleteWorkspaceApiKeyRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws
