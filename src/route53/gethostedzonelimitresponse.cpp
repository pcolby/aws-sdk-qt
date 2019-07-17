/*
    Copyright 2013-2019 Paul Colby

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

#include "gethostedzonelimitresponse.h"
#include "gethostedzonelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneLimitResponse
 * \brief The GetHostedZoneLimitResponse class provides an interace for Route53 GetHostedZoneLimit responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHostedZoneLimit
 */

/*!
 * Constructs a GetHostedZoneLimitResponse object for \a reply to \a request, with parent \a parent.
 */
GetHostedZoneLimitResponse::GetHostedZoneLimitResponse(
        const GetHostedZoneLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneLimitResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHostedZoneLimitRequest * GetHostedZoneLimitResponse::request() const
{
    Q_D(const GetHostedZoneLimitResponse);
    return static_cast<const GetHostedZoneLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHostedZoneLimit \a response.
 */
void GetHostedZoneLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHostedZoneLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHostedZoneLimitResponsePrivate
 * \brief The GetHostedZoneLimitResponsePrivate class provides private implementation for GetHostedZoneLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneLimitResponsePrivate object with public implementation \a q.
 */
GetHostedZoneLimitResponsePrivate::GetHostedZoneLimitResponsePrivate(
    GetHostedZoneLimitResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHostedZoneLimit response element from \a xml.
 */
void GetHostedZoneLimitResponsePrivate::parseGetHostedZoneLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
