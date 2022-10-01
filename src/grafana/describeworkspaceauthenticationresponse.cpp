// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspaceauthenticationresponse.h"
#include "describeworkspaceauthenticationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DescribeWorkspaceAuthenticationResponse
 * \brief The DescribeWorkspaceAuthenticationResponse class provides an interace for Grafana DescribeWorkspaceAuthentication responses.
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
 * \sa GrafanaClient::describeWorkspaceAuthentication
 */

/*!
 * Constructs a DescribeWorkspaceAuthenticationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceAuthenticationResponse::DescribeWorkspaceAuthenticationResponse(
        const DescribeWorkspaceAuthenticationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new DescribeWorkspaceAuthenticationResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceAuthenticationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceAuthenticationRequest * DescribeWorkspaceAuthenticationResponse::request() const
{
    Q_D(const DescribeWorkspaceAuthenticationResponse);
    return static_cast<const DescribeWorkspaceAuthenticationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana DescribeWorkspaceAuthentication \a response.
 */
void DescribeWorkspaceAuthenticationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceAuthenticationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::DescribeWorkspaceAuthenticationResponsePrivate
 * \brief The DescribeWorkspaceAuthenticationResponsePrivate class provides private implementation for DescribeWorkspaceAuthenticationResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DescribeWorkspaceAuthenticationResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceAuthenticationResponsePrivate::DescribeWorkspaceAuthenticationResponsePrivate(
    DescribeWorkspaceAuthenticationResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana DescribeWorkspaceAuthentication response element from \a xml.
 */
void DescribeWorkspaceAuthenticationResponsePrivate::parseDescribeWorkspaceAuthenticationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceAuthenticationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
