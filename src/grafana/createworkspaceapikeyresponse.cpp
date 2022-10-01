// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspaceapikeyresponse.h"
#include "createworkspaceapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::CreateWorkspaceApiKeyResponse
 * \brief The CreateWorkspaceApiKeyResponse class provides an interace for Grafana CreateWorkspaceApiKey responses.
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
 * \sa GrafanaClient::createWorkspaceApiKey
 */

/*!
 * Constructs a CreateWorkspaceApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceApiKeyResponse::CreateWorkspaceApiKeyResponse(
        const CreateWorkspaceApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new CreateWorkspaceApiKeyResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceApiKeyRequest * CreateWorkspaceApiKeyResponse::request() const
{
    Q_D(const CreateWorkspaceApiKeyResponse);
    return static_cast<const CreateWorkspaceApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana CreateWorkspaceApiKey \a response.
 */
void CreateWorkspaceApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::CreateWorkspaceApiKeyResponsePrivate
 * \brief The CreateWorkspaceApiKeyResponsePrivate class provides private implementation for CreateWorkspaceApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a CreateWorkspaceApiKeyResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceApiKeyResponsePrivate::CreateWorkspaceApiKeyResponsePrivate(
    CreateWorkspaceApiKeyResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana CreateWorkspaceApiKey response element from \a xml.
 */
void CreateWorkspaceApiKeyResponsePrivate::parseCreateWorkspaceApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
