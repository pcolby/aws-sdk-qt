// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspaceresponse.h"
#include "deleteworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DeleteWorkspaceResponse
 * \brief The DeleteWorkspaceResponse class provides an interace for Grafana DeleteWorkspace responses.
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
 * \sa GrafanaClient::deleteWorkspace
 */

/*!
 * Constructs a DeleteWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceResponse::DeleteWorkspaceResponse(
        const DeleteWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new DeleteWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceRequest * DeleteWorkspaceResponse::request() const
{
    Q_D(const DeleteWorkspaceResponse);
    return static_cast<const DeleteWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana DeleteWorkspace \a response.
 */
void DeleteWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::DeleteWorkspaceResponsePrivate
 * \brief The DeleteWorkspaceResponsePrivate class provides private implementation for DeleteWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DeleteWorkspaceResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceResponsePrivate::DeleteWorkspaceResponsePrivate(
    DeleteWorkspaceResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana DeleteWorkspace response element from \a xml.
 */
void DeleteWorkspaceResponsePrivate::parseDeleteWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
