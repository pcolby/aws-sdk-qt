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

#include "updatereadinesscheckresponse.h"
#include "updatereadinesscheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateReadinessCheckResponse
 * \brief The UpdateReadinessCheckResponse class provides an interace for Route53RecoveryReadiness UpdateReadinessCheck responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateReadinessCheck
 */

/*!
 * Constructs a UpdateReadinessCheckResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReadinessCheckResponse::UpdateReadinessCheckResponse(
        const UpdateReadinessCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateReadinessCheckResponsePrivate(this), parent)
{
    setRequest(new UpdateReadinessCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReadinessCheckRequest * UpdateReadinessCheckResponse::request() const
{
    Q_D(const UpdateReadinessCheckResponse);
    return static_cast<const UpdateReadinessCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateReadinessCheck \a response.
 */
void UpdateReadinessCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReadinessCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateReadinessCheckResponsePrivate
 * \brief The UpdateReadinessCheckResponsePrivate class provides private implementation for UpdateReadinessCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateReadinessCheckResponsePrivate object with public implementation \a q.
 */
UpdateReadinessCheckResponsePrivate::UpdateReadinessCheckResponsePrivate(
    UpdateReadinessCheckResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateReadinessCheck response element from \a xml.
 */
void UpdateReadinessCheckResponsePrivate::parseUpdateReadinessCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReadinessCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
