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

#include "deleteroutingcontrolresponse.h"
#include "deleteroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlResponse
 * \brief The DeleteRoutingControlResponse class provides an interace for Route53RecoveryControlConfig DeleteRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteRoutingControl
 */

/*!
 * Constructs a DeleteRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoutingControlResponse::DeleteRoutingControlResponse(
        const DeleteRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteRoutingControlResponsePrivate(this), parent)
{
    setRequest(new DeleteRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoutingControlRequest * DeleteRoutingControlResponse::request() const
{
    Q_D(const DeleteRoutingControlResponse);
    return static_cast<const DeleteRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteRoutingControl \a response.
 */
void DeleteRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlResponsePrivate
 * \brief The DeleteRoutingControlResponsePrivate class provides private implementation for DeleteRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteRoutingControlResponsePrivate object with public implementation \a q.
 */
DeleteRoutingControlResponsePrivate::DeleteRoutingControlResponsePrivate(
    DeleteRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteRoutingControl response element from \a xml.
 */
void DeleteRoutingControlResponsePrivate::parseDeleteRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
