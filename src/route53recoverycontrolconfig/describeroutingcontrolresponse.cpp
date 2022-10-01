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

#include "describeroutingcontrolresponse.h"
#include "describeroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeRoutingControlResponse
 * \brief The DescribeRoutingControlResponse class provides an interace for Route53RecoveryControlConfig DescribeRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeRoutingControl
 */

/*!
 * Constructs a DescribeRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRoutingControlResponse::DescribeRoutingControlResponse(
        const DescribeRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DescribeRoutingControlResponsePrivate(this), parent)
{
    setRequest(new DescribeRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRoutingControlRequest * DescribeRoutingControlResponse::request() const
{
    Q_D(const DescribeRoutingControlResponse);
    return static_cast<const DescribeRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DescribeRoutingControl \a response.
 */
void DescribeRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeRoutingControlResponsePrivate
 * \brief The DescribeRoutingControlResponsePrivate class provides private implementation for DescribeRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeRoutingControlResponsePrivate object with public implementation \a q.
 */
DescribeRoutingControlResponsePrivate::DescribeRoutingControlResponsePrivate(
    DescribeRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DescribeRoutingControl response element from \a xml.
 */
void DescribeRoutingControlResponsePrivate::parseDescribeRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
