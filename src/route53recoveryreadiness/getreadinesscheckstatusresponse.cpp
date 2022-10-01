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

#include "getreadinesscheckstatusresponse.h"
#include "getreadinesscheckstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusResponse
 * \brief The GetReadinessCheckStatusResponse class provides an interace for Route53RecoveryReadiness GetReadinessCheckStatus responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckStatus
 */

/*!
 * Constructs a GetReadinessCheckStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetReadinessCheckStatusResponse::GetReadinessCheckStatusResponse(
        const GetReadinessCheckStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetReadinessCheckStatusResponsePrivate(this), parent)
{
    setRequest(new GetReadinessCheckStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReadinessCheckStatusRequest * GetReadinessCheckStatusResponse::request() const
{
    Q_D(const GetReadinessCheckStatusResponse);
    return static_cast<const GetReadinessCheckStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetReadinessCheckStatus \a response.
 */
void GetReadinessCheckStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReadinessCheckStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusResponsePrivate
 * \brief The GetReadinessCheckStatusResponsePrivate class provides private implementation for GetReadinessCheckStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckStatusResponsePrivate object with public implementation \a q.
 */
GetReadinessCheckStatusResponsePrivate::GetReadinessCheckStatusResponsePrivate(
    GetReadinessCheckStatusResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetReadinessCheckStatus response element from \a xml.
 */
void GetReadinessCheckStatusResponsePrivate::parseGetReadinessCheckStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReadinessCheckStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
