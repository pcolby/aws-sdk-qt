// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspaceresponse.h"
#include "describeworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DescribeWorkspaceResponse
 * \brief The DescribeWorkspaceResponse class provides an interace for Grafana DescribeWorkspace responses.
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
 * \sa GrafanaClient::describeWorkspace
 */

/*!
 * Constructs a DescribeWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceResponse::DescribeWorkspaceResponse(
        const DescribeWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new DescribeWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceRequest * DescribeWorkspaceResponse::request() const
{
    Q_D(const DescribeWorkspaceResponse);
    return static_cast<const DescribeWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana DescribeWorkspace \a response.
 */
void DescribeWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::DescribeWorkspaceResponsePrivate
 * \brief The DescribeWorkspaceResponsePrivate class provides private implementation for DescribeWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DescribeWorkspaceResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceResponsePrivate::DescribeWorkspaceResponsePrivate(
    DescribeWorkspaceResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana DescribeWorkspace response element from \a xml.
 */
void DescribeWorkspaceResponsePrivate::parseDescribeWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
