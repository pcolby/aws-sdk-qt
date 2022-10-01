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

#include "listcontrolpanelsresponse.h"
#include "listcontrolpanelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsResponse
 * \brief The ListControlPanelsResponse class provides an interace for Route53RecoveryControlConfig ListControlPanels responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listControlPanels
 */

/*!
 * Constructs a ListControlPanelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListControlPanelsResponse::ListControlPanelsResponse(
        const ListControlPanelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListControlPanelsResponsePrivate(this), parent)
{
    setRequest(new ListControlPanelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListControlPanelsRequest * ListControlPanelsResponse::request() const
{
    Q_D(const ListControlPanelsResponse);
    return static_cast<const ListControlPanelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListControlPanels \a response.
 */
void ListControlPanelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListControlPanelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsResponsePrivate
 * \brief The ListControlPanelsResponsePrivate class provides private implementation for ListControlPanelsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListControlPanelsResponsePrivate object with public implementation \a q.
 */
ListControlPanelsResponsePrivate::ListControlPanelsResponsePrivate(
    ListControlPanelsResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListControlPanels response element from \a xml.
 */
void ListControlPanelsResponsePrivate::parseListControlPanelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListControlPanelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
