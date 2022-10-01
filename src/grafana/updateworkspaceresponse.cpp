// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspaceresponse.h"
#include "updateworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdateWorkspaceResponse
 * \brief The UpdateWorkspaceResponse class provides an interace for Grafana UpdateWorkspace responses.
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
 * \sa GrafanaClient::updateWorkspace
 */

/*!
 * Constructs a UpdateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceResponse::UpdateWorkspaceResponse(
        const UpdateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new UpdateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceRequest * UpdateWorkspaceResponse::request() const
{
    Q_D(const UpdateWorkspaceResponse);
    return static_cast<const UpdateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana UpdateWorkspace \a response.
 */
void UpdateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::UpdateWorkspaceResponsePrivate
 * \brief The UpdateWorkspaceResponsePrivate class provides private implementation for UpdateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdateWorkspaceResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceResponsePrivate::UpdateWorkspaceResponsePrivate(
    UpdateWorkspaceResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana UpdateWorkspace response element from \a xml.
 */
void UpdateWorkspaceResponsePrivate::parseUpdateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
