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

#include "createcontrolpanelresponse.h"
#include "createcontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelResponse
 * \brief The CreateControlPanelResponse class provides an interace for Route53RecoveryControlConfig CreateControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createControlPanel
 */

/*!
 * Constructs a CreateControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateControlPanelResponse::CreateControlPanelResponse(
        const CreateControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new CreateControlPanelResponsePrivate(this), parent)
{
    setRequest(new CreateControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateControlPanelRequest * CreateControlPanelResponse::request() const
{
    Q_D(const CreateControlPanelResponse);
    return static_cast<const CreateControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig CreateControlPanel \a response.
 */
void CreateControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelResponsePrivate
 * \brief The CreateControlPanelResponsePrivate class provides private implementation for CreateControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateControlPanelResponsePrivate object with public implementation \a q.
 */
CreateControlPanelResponsePrivate::CreateControlPanelResponsePrivate(
    CreateControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig CreateControlPanel response element from \a xml.
 */
void CreateControlPanelResponsePrivate::parseCreateControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
