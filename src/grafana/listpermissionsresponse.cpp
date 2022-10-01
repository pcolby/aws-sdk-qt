// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionsresponse.h"
#include "listpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::ListPermissionsResponse
 * \brief The ListPermissionsResponse class provides an interace for Grafana ListPermissions responses.
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
 * \sa GrafanaClient::listPermissions
 */

/*!
 * Constructs a ListPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionsResponse::ListPermissionsResponse(
        const ListPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new ListPermissionsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionsRequest * ListPermissionsResponse::request() const
{
    Q_D(const ListPermissionsResponse);
    return static_cast<const ListPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana ListPermissions \a response.
 */
void ListPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::ListPermissionsResponsePrivate
 * \brief The ListPermissionsResponsePrivate class provides private implementation for ListPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a ListPermissionsResponsePrivate object with public implementation \a q.
 */
ListPermissionsResponsePrivate::ListPermissionsResponsePrivate(
    ListPermissionsResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana ListPermissions response element from \a xml.
 */
void ListPermissionsResponsePrivate::parseListPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
