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

#include "createroutingcontrolresponse.h"
#include "createroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateRoutingControlResponse
 * \brief The CreateRoutingControlResponse class provides an interace for Route53RecoveryControlConfig CreateRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createRoutingControl
 */

/*!
 * Constructs a CreateRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRoutingControlResponse::CreateRoutingControlResponse(
        const CreateRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new CreateRoutingControlResponsePrivate(this), parent)
{
    setRequest(new CreateRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRoutingControlRequest * CreateRoutingControlResponse::request() const
{
    Q_D(const CreateRoutingControlResponse);
    return static_cast<const CreateRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig CreateRoutingControl \a response.
 */
void CreateRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateRoutingControlResponsePrivate
 * \brief The CreateRoutingControlResponsePrivate class provides private implementation for CreateRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateRoutingControlResponsePrivate object with public implementation \a q.
 */
CreateRoutingControlResponsePrivate::CreateRoutingControlResponsePrivate(
    CreateRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig CreateRoutingControl response element from \a xml.
 */
void CreateRoutingControlResponsePrivate::parseCreateRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
