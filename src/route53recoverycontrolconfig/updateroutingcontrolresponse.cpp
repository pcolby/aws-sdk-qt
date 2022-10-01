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

#include "updateroutingcontrolresponse.h"
#include "updateroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlResponse
 * \brief The UpdateRoutingControlResponse class provides an interace for Route53RecoveryControlConfig UpdateRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateRoutingControl
 */

/*!
 * Constructs a UpdateRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoutingControlResponse::UpdateRoutingControlResponse(
        const UpdateRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new UpdateRoutingControlResponsePrivate(this), parent)
{
    setRequest(new UpdateRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoutingControlRequest * UpdateRoutingControlResponse::request() const
{
    Q_D(const UpdateRoutingControlResponse);
    return static_cast<const UpdateRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig UpdateRoutingControl \a response.
 */
void UpdateRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlResponsePrivate
 * \brief The UpdateRoutingControlResponsePrivate class provides private implementation for UpdateRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateRoutingControlResponsePrivate object with public implementation \a q.
 */
UpdateRoutingControlResponsePrivate::UpdateRoutingControlResponsePrivate(
    UpdateRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig UpdateRoutingControl response element from \a xml.
 */
void UpdateRoutingControlResponsePrivate::parseUpdateRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
