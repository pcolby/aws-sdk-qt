// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelicenseresponse.h"
#include "associatelicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::AssociateLicenseResponse
 * \brief The AssociateLicenseResponse class provides an interace for Grafana AssociateLicense responses.
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
 * \sa GrafanaClient::associateLicense
 */

/*!
 * Constructs a AssociateLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLicenseResponse::AssociateLicenseResponse(
        const AssociateLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new AssociateLicenseResponsePrivate(this), parent)
{
    setRequest(new AssociateLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLicenseRequest * AssociateLicenseResponse::request() const
{
    Q_D(const AssociateLicenseResponse);
    return static_cast<const AssociateLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana AssociateLicense \a response.
 */
void AssociateLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::AssociateLicenseResponsePrivate
 * \brief The AssociateLicenseResponsePrivate class provides private implementation for AssociateLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a AssociateLicenseResponsePrivate object with public implementation \a q.
 */
AssociateLicenseResponsePrivate::AssociateLicenseResponsePrivate(
    AssociateLicenseResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana AssociateLicense response element from \a xml.
 */
void AssociateLicenseResponsePrivate::parseAssociateLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
