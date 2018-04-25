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

#include "gethostedzoneresponse.h"
#include "gethostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneResponse
 * \brief The GetHostedZoneResponse class provides an interace for Route53 GetHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHostedZone
 */

/*!
 * Constructs a GetHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
GetHostedZoneResponse::GetHostedZoneResponse(
        const GetHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHostedZoneRequest * GetHostedZoneResponse::request() const
{
    Q_D(const GetHostedZoneResponse);
    return static_cast<const GetHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHostedZone \a response.
 */
void GetHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHostedZoneResponsePrivate
 * \brief The GetHostedZoneResponsePrivate class provides private implementation for GetHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneResponsePrivate object with public implementation \a q.
 */
GetHostedZoneResponsePrivate::GetHostedZoneResponsePrivate(
    GetHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHostedZone response element from \a xml.
 */
void GetHostedZoneResponsePrivate::parseGetHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
