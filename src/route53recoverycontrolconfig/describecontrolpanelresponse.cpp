/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
