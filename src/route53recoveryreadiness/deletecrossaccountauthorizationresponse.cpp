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

#include "deletecrossaccountauthorizationresponse.h"
#include "deletecrossaccountauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationResponse
 * \brief The DeleteCrossAccountAuthorizationResponse class provides an interace for Route53RecoveryReadiness DeleteCrossAccountAuthorization responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCrossAccountAuthorization
 */

/*!
 * Constructs a DeleteCrossAccountAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCrossAccountAuthorizationResponse::DeleteCrossAccountAuthorizationResponse(
        const DeleteCrossAccountAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteCrossAccountAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteCrossAccountAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCrossAccountAuthorizationRequest * DeleteCrossAccountAuthorizationResponse::request() const
{
    Q_D(const DeleteCrossAccountAuthorizationResponse);
    return static_cast<const DeleteCrossAccountAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteCrossAccountAuthorization \a response.
 */
void DeleteCrossAccountAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCrossAccountAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationResponsePrivate
 * \brief The DeleteCrossAccountAuthorizationResponsePrivate class provides private implementation for DeleteCrossAccountAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCrossAccountAuthorizationResponsePrivate object with public implementation \a q.
 */
DeleteCrossAccountAuthorizationResponsePrivate::DeleteCrossAccountAuthorizationResponsePrivate(
    DeleteCrossAccountAuthorizationResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteCrossAccountAuthorization response element from \a xml.
 */
void DeleteCrossAccountAuthorizationResponsePrivate::parseDeleteCrossAccountAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCrossAccountAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
