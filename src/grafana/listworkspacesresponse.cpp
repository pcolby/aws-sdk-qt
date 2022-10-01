// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesresponse.h"
#include "listworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::ListWorkspacesResponse
 * \brief The ListWorkspacesResponse class provides an interace for Grafana ListWorkspaces responses.
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
 * \sa GrafanaClient::listWorkspaces
 */

/*!
 * Constructs a ListWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkspacesResponse::ListWorkspacesResponse(
        const ListWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new ListWorkspacesResponsePrivate(this), parent)
{
    setRequest(new ListWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkspacesRequest * ListWorkspacesResponse::request() const
{
    Q_D(const ListWorkspacesResponse);
    return static_cast<const ListWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana ListWorkspaces \a response.
 */
void ListWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::ListWorkspacesResponsePrivate
 * \brief The ListWorkspacesResponsePrivate class provides private implementation for ListWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a ListWorkspacesResponsePrivate object with public implementation \a q.
 */
ListWorkspacesResponsePrivate::ListWorkspacesResponsePrivate(
    ListWorkspacesResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana ListWorkspaces response element from \a xml.
 */
void ListWorkspacesResponsePrivate::parseListWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
