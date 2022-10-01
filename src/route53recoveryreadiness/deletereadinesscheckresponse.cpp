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

#include "deletereadinesscheckresponse.h"
#include "deletereadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckResponse
 * \brief The DeleteReadinessCheckResponse class provides an interace for Route53RecoveryReadiness DeleteReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteReadinessCheck
 */

/*!
 * Constructs a DeleteReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReadinessCheckResponse::DeleteReadinessCheckResponse(
        const DeleteReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new DeleteReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReadinessCheckRequest * DeleteReadinessCheckResponse::request() const
{
    Q_D(const DeleteReadinessCheckResponse);
    return static_cast<const DeleteReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteReadinessCheck \a response.
 */
void DeleteReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteReadinessCheckResponsePrivate
 * \brief The DeleteReadinessCheckResponsePrivate class provides private implementation for DeleteReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteReadinessCheckResponsePrivate object with public implementation \a q.
 */
DeleteReadinessCheckResponsePrivate::DeleteReadinessCheckResponsePrivate(
    DeleteReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteReadinessCheck response element from \a xml.
 */
void DeleteReadinessCheckResponsePrivate::parseDeleteReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
