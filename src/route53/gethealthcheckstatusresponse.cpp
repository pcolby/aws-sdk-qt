/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gethealthcheckstatusresponse.h"
#include "gethealthcheckstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckStatusResponse
 * \brief The GetHealthCheckStatusResponse class provides an interace for Route53 GetHealthCheckStatus responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHealthCheckStatus
 */

/*!
 * Constructs a GetHealthCheckStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckStatusResponse::GetHealthCheckStatusResponse(
        const GetHealthCheckStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckStatusResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckStatusRequest * GetHealthCheckStatusResponse::request() const
{
    Q_D(const GetHealthCheckStatusResponse);
    return static_cast<const GetHealthCheckStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheckStatus \a response.
 */
void GetHealthCheckStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetHealthCheckStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckStatusResponsePrivate
 * \brief The GetHealthCheckStatusResponsePrivate class provides private implementation for GetHealthCheckStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckStatusResponsePrivate object with public implementation \a q.
 */
GetHealthCheckStatusResponsePrivate::GetHealthCheckStatusResponsePrivate(
    GetHealthCheckStatusResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheckStatus response element from \a xml.
 */
void GetHealthCheckStatusResponsePrivate::parseGetHealthCheckStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckStatusResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
