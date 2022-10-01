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

#include "getreadinesscheckresourcestatusresponse.h"
#include "getreadinesscheckresourcestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResourceStatusResponse
 * \brief The GetReadinessCheckResourceStatusResponse class provides an interace for Route53RecoveryReadiness GetReadinessCheckResourceStatus responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckResourceStatus
 */

/*!
 * Constructs a GetReadinessCheckResourceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetReadinessCheckResourceStatusResponse::GetReadinessCheckResourceStatusResponse(
        const GetReadinessCheckResourceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetReadinessCheckResourceStatusResponsePrivate(this), parent)
{
    setRequest(new GetReadinessCheckResourceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReadinessCheckResourceStatusRequest * GetReadinessCheckResourceStatusResponse::request() const
{
    Q_D(const GetReadinessCheckResourceStatusResponse);
    return static_cast<const GetReadinessCheckResourceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetReadinessCheckResourceStatus \a response.
 */
void GetReadinessCheckResourceStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReadinessCheckResourceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckResourceStatusResponsePrivate
 * \brief The GetReadinessCheckResourceStatusResponsePrivate class provides private implementation for GetReadinessCheckResourceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckResourceStatusResponsePrivate object with public implementation \a q.
 */
GetReadinessCheckResourceStatusResponsePrivate::GetReadinessCheckResourceStatusResponsePrivate(
    GetReadinessCheckResourceStatusResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetReadinessCheckResourceStatus response element from \a xml.
 */
void GetReadinessCheckResourceStatusResponsePrivate::parseGetReadinessCheckResourceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReadinessCheckResourceStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
