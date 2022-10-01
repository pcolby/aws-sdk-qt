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

#include "getreadinesscheckresponse.h"
#include "getreadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResponse
 * \brief The GetReadinessCheckResponse class provides an interace for Route53RecoveryReadiness GetReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheck
 */

/*!
 * Constructs a GetReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
GetReadinessCheckResponse::GetReadinessCheckResponse(
        const GetReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new GetReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReadinessCheckRequest * GetReadinessCheckResponse::request() const
{
    Q_D(const GetReadinessCheckResponse);
    return static_cast<const GetReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetReadinessCheck \a response.
 */
void GetReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResponsePrivate
 * \brief The GetReadinessCheckResponsePrivate class provides private implementation for GetReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckResponsePrivate object with public implementation \a q.
 */
GetReadinessCheckResponsePrivate::GetReadinessCheckResponsePrivate(
    GetReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetReadinessCheck response element from \a xml.
 */
void GetReadinessCheckResponsePrivate::parseGetReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
