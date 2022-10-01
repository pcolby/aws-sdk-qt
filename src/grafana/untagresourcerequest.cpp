// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for Grafana UntagResource requests.
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
 * \sa GrafanaClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : GrafanaRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : GrafanaRequest(new UntagResourceRequestPrivate(GrafanaRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const GrafanaRequest::Action action, UntagResourceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws
