// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontrolpanelresponse.h"
#include "describecontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeControlPanelResponse
 * \brief The DescribeControlPanelResponse class provides an interace for Route53RecoveryControlConfig DescribeControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeControlPanel
 */

/*!
 * Constructs a DescribeControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeControlPanelResponse::DescribeControlPanelResponse(
        const DescribeControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DescribeControlPanelResponsePrivate(this), parent)
{
    setRequest(new DescribeControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeControlPanelRequest * DescribeControlPanelResponse::request() const
{
    Q_D(const DescribeControlPanelResponse);
    return static_cast<const DescribeControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DescribeControlPanel \a response.
 */
void DescribeControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeControlPanelResponsePrivate
 * \brief The DescribeControlPanelResponsePrivate class provides private implementation for DescribeControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeControlPanelResponsePrivate object with public implementation \a q.
 */
DescribeControlPanelResponsePrivate::DescribeControlPanelResponsePrivate(
    DescribeControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DescribeControlPanel response element from \a xml.
 */
void DescribeControlPanelResponsePrivate::parseDescribeControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
