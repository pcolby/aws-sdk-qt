// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatelicenseresponse.h"
#include "disassociatelicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DisassociateLicenseResponse
 * \brief The DisassociateLicenseResponse class provides an interace for Grafana DisassociateLicense responses.
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
 * \sa GrafanaClient::disassociateLicense
 */

/*!
 * Constructs a DisassociateLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateLicenseResponse::DisassociateLicenseResponse(
        const DisassociateLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GrafanaResponse(new DisassociateLicenseResponsePrivate(this), parent)
{
    setRequest(new DisassociateLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateLicenseRequest * DisassociateLicenseResponse::request() const
{
    Q_D(const DisassociateLicenseResponse);
    return static_cast<const DisassociateLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Grafana DisassociateLicense \a response.
 */
void DisassociateLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Grafana::DisassociateLicenseResponsePrivate
 * \brief The DisassociateLicenseResponsePrivate class provides private implementation for DisassociateLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DisassociateLicenseResponsePrivate object with public implementation \a q.
 */
DisassociateLicenseResponsePrivate::DisassociateLicenseResponsePrivate(
    DisassociateLicenseResponse * const q) : GrafanaResponsePrivate(q)
{

}

/*!
 * Parses a Grafana DisassociateLicense response element from \a xml.
 */
void DisassociateLicenseResponsePrivate::parseDisassociateLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Grafana
} // namespace QtAws
