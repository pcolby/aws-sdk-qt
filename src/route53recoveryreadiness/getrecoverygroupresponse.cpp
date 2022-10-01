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

#include "getrecoverygroupresponse.h"
#include "getrecoverygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupResponse
 * \brief The GetRecoveryGroupResponse class provides an interace for Route53RecoveryReadiness GetRecoveryGroup responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getRecoveryGroup
 */

/*!
 * Constructs a GetRecoveryGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecoveryGroupResponse::GetRecoveryGroupResponse(
        const GetRecoveryGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetRecoveryGroupResponsePrivate(this), parent)
{
    setRequest(new GetRecoveryGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecoveryGroupRequest * GetRecoveryGroupResponse::request() const
{
    Q_D(const GetRecoveryGroupResponse);
    return static_cast<const GetRecoveryGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetRecoveryGroup \a response.
 */
void GetRecoveryGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecoveryGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupResponsePrivate
 * \brief The GetRecoveryGroupResponsePrivate class provides private implementation for GetRecoveryGroupResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetRecoveryGroupResponsePrivate object with public implementation \a q.
 */
GetRecoveryGroupResponsePrivate::GetRecoveryGroupResponsePrivate(
    GetRecoveryGroupResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetRecoveryGroup response element from \a xml.
 */
void GetRecoveryGroupResponsePrivate::parseGetRecoveryGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecoveryGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
