// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for Grafana TagResource requests.
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
 * \sa GrafanaClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : GrafanaRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : GrafanaRequest(new TagResourceRequestPrivate(GrafanaRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a TagResourceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const GrafanaRequest::Action action, TagResourceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws
