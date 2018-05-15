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

#include "getchangeresponse.h"
#include "getchangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetChangeResponse
 * \brief The GetChangeResponse class provides an interace for Route53 GetChange responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getChange
 */

/*!
 * Constructs a GetChangeResponse object for \a reply to \a request, with parent \a parent.
 */
GetChangeResponse::GetChangeResponse(
        const GetChangeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetChangeResponsePrivate(this), parent)
{
    setRequest(new GetChangeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChangeRequest * GetChangeResponse::request() const
{
    Q_D(const GetChangeResponse);
    return static_cast<const GetChangeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetChange \a response.
 */
void GetChangeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChangeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetChangeResponsePrivate
 * \brief The GetChangeResponsePrivate class provides private implementation for GetChangeResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetChangeResponsePrivate object with public implementation \a q.
 */
GetChangeResponsePrivate::GetChangeResponsePrivate(
    GetChangeResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetChange response element from \a xml.
 */
void GetChangeResponsePrivate::parseGetChangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangeResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
