// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspaceapikeyresponse.h"
#include "deleteworkspaceapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DeleteWorkspaceApiKeyResponse
 * \brief The DeleteWorkspaceApiKeyResponse class provides an interace for Grafana DeleteWorkspaceApiKey responses.
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
 * Constructs a DeleteWorkspaceApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceApiKeyResponse::DeleteWorkspaceApiKeyResponse(
        const DeleteWorkspaceApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new DeleteWorkspaceApiKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceApiKeyRequest * DeleteWorkspaceApiKeyResponse::request() const
{
    Q_D(const DeleteWorkspaceApiKeyResponse);
    return static_cast<const DeleteWorkspaceApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana DeleteWorkspaceApiKey \a response.
 */
void DeleteWorkspaceApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::DeleteWorkspaceApiKeyResponsePrivate
 * \brief The DeleteWorkspaceApiKeyResponsePrivate class provides private implementation for DeleteWorkspaceApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DeleteWorkspaceApiKeyResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceApiKeyResponsePrivate::DeleteWorkspaceApiKeyResponsePrivate(
    DeleteWorkspaceApiKeyResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana DeleteWorkspaceApiKey response element from \a xml.
 */
void DeleteWorkspaceApiKeyResponsePrivate::parseDeleteWorkspaceApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
