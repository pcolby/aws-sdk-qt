// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspaceauthenticationresponse.h"
#include "updateworkspaceauthenticationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdateWorkspaceAuthenticationResponse
 * \brief The UpdateWorkspaceAuthenticationResponse class provides an interace for Grafana UpdateWorkspaceAuthentication responses.
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
 * \sa GrafanaClient::updateWorkspaceAuthentication
 */

/*!
 * Constructs a UpdateWorkspaceAuthenticationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceAuthenticationResponse::UpdateWorkspaceAuthenticationResponse(
        const UpdateWorkspaceAuthenticationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new UpdateWorkspaceAuthenticationResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceAuthenticationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceAuthenticationRequest * UpdateWorkspaceAuthenticationResponse::request() const
{
    Q_D(const UpdateWorkspaceAuthenticationResponse);
    return static_cast<const UpdateWorkspaceAuthenticationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana UpdateWorkspaceAuthentication \a response.
 */
void UpdateWorkspaceAuthenticationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceAuthenticationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::UpdateWorkspaceAuthenticationResponsePrivate
 * \brief The UpdateWorkspaceAuthenticationResponsePrivate class provides private implementation for UpdateWorkspaceAuthenticationResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdateWorkspaceAuthenticationResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceAuthenticationResponsePrivate::UpdateWorkspaceAuthenticationResponsePrivate(
    UpdateWorkspaceAuthenticationResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana UpdateWorkspaceAuthentication response element from \a xml.
 */
void UpdateWorkspaceAuthenticationResponsePrivate::parseUpdateWorkspaceAuthenticationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceAuthenticationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
