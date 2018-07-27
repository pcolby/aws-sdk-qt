/*
    Copyright 2013-2018 Paul Colby

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

#include "deletehostedzoneresponse.h"
#include "deletehostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHostedZoneResponse
 * \brief The DeleteHostedZoneResponse class provides an interace for Route53 DeleteHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteHostedZone
 */

/*!
 * Constructs a DeleteHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHostedZoneResponse::DeleteHostedZoneResponse(
        const DeleteHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteHostedZoneResponsePrivate(this), parent)
{
    setRequest(new DeleteHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHostedZoneRequest * DeleteHostedZoneResponse::request() const
{
    Q_D(const DeleteHostedZoneResponse);
    return static_cast<const DeleteHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteHostedZone \a response.
 */
void DeleteHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteHostedZoneResponsePrivate
 * \brief The DeleteHostedZoneResponsePrivate class provides private implementation for DeleteHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHostedZoneResponsePrivate object with public implementation \a q.
 */
DeleteHostedZoneResponsePrivate::DeleteHostedZoneResponsePrivate(
    DeleteHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteHostedZone response element from \a xml.
 */
void DeleteHostedZoneResponsePrivate::parseDeleteHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
