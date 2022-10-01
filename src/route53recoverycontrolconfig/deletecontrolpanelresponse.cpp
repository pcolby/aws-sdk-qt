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

#include "deletecontrolpanelresponse.h"
#include "deletecontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelResponse
 * \brief The DeleteControlPanelResponse class provides an interace for Route53RecoveryControlConfig DeleteControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteControlPanel
 */

/*!
 * Constructs a DeleteControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteControlPanelResponse::DeleteControlPanelResponse(
        const DeleteControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteControlPanelResponsePrivate(this), parent)
{
    setRequest(new DeleteControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteControlPanelRequest * DeleteControlPanelResponse::request() const
{
    Q_D(const DeleteControlPanelResponse);
    return static_cast<const DeleteControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteControlPanel \a response.
 */
void DeleteControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelResponsePrivate
 * \brief The DeleteControlPanelResponsePrivate class provides private implementation for DeleteControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteControlPanelResponsePrivate object with public implementation \a q.
 */
DeleteControlPanelResponsePrivate::DeleteControlPanelResponsePrivate(
    DeleteControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteControlPanel response element from \a xml.
 */
void DeleteControlPanelResponsePrivate::parseDeleteControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
