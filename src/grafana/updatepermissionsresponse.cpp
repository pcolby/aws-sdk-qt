// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepermissionsresponse.h"
#include "updatepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdatePermissionsResponse
 * \brief The UpdatePermissionsResponse class provides an interace for Grafana UpdatePermissions responses.
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
 * \sa GrafanaClient::updatePermissions
 */

/*!
 * Constructs a UpdatePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePermissionsResponse::UpdatePermissionsResponse(
        const UpdatePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new UpdatePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdatePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePermissionsRequest * UpdatePermissionsResponse::request() const
{
    Q_D(const UpdatePermissionsResponse);
    return static_cast<const UpdatePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana UpdatePermissions \a response.
 */
void UpdatePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::UpdatePermissionsResponsePrivate
 * \brief The UpdatePermissionsResponsePrivate class provides private implementation for UpdatePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdatePermissionsResponsePrivate object with public implementation \a q.
 */
UpdatePermissionsResponsePrivate::UpdatePermissionsResponsePrivate(
    UpdatePermissionsResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana UpdatePermissions response element from \a xml.
 */
void UpdatePermissionsResponsePrivate::parseUpdatePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
