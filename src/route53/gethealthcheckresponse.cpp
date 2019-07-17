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

#include "gethealthcheckresponse.h"
#include "gethealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckResponse
 * \brief The GetHealthCheckResponse class provides an interace for Route53 GetHealthCheck responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHealthCheck
 */

/*!
 * Constructs a GetHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckResponse::GetHealthCheckResponse(
        const GetHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckRequest * GetHealthCheckResponse::request() const
{
    Q_D(const GetHealthCheckResponse);
    return static_cast<const GetHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheck \a response.
 */
void GetHealthCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckResponsePrivate
 * \brief The GetHealthCheckResponsePrivate class provides private implementation for GetHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckResponsePrivate object with public implementation \a q.
 */
GetHealthCheckResponsePrivate::GetHealthCheckResponsePrivate(
    GetHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheck response element from \a xml.
 */
void GetHealthCheckResponsePrivate::parseGetHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
