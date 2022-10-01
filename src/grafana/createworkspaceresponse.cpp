// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspaceresponse.h"
#include "createworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::CreateWorkspaceResponse
 * \brief The CreateWorkspaceResponse class provides an interace for Grafana CreateWorkspace responses.
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
 * \sa GrafanaClient::createWorkspace
 */

/*!
 * Constructs a CreateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceResponse::CreateWorkspaceResponse(
        const CreateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new CreateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceRequest * CreateWorkspaceResponse::request() const
{
    Q_D(const CreateWorkspaceResponse);
    return static_cast<const CreateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana CreateWorkspace \a response.
 */
void CreateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::CreateWorkspaceResponsePrivate
 * \brief The CreateWorkspaceResponsePrivate class provides private implementation for CreateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a CreateWorkspaceResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceResponsePrivate::CreateWorkspaceResponsePrivate(
    CreateWorkspaceResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana CreateWorkspace response element from \a xml.
 */
void CreateWorkspaceResponsePrivate::parseCreateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
