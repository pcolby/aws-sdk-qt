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

#include "updatecellresponse.h"
#include "updatecellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellResponse
 * \brief The UpdateCellResponse class provides an interace for Route53RecoveryReadiness UpdateCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateCell
 */

/*!
 * Constructs a UpdateCellResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCellResponse::UpdateCellResponse(
        const UpdateCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new UpdateCellResponsePrivate(this), parent)
{
    setRequest(new UpdateCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCellRequest * UpdateCellResponse::request() const
{
    Q_D(const UpdateCellResponse);
    return static_cast<const UpdateCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness UpdateCell \a response.
 */
void UpdateCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellResponsePrivate
 * \brief The UpdateCellResponsePrivate class provides private implementation for UpdateCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateCellResponsePrivate object with public implementation \a q.
 */
UpdateCellResponsePrivate::UpdateCellResponsePrivate(
    UpdateCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness UpdateCell response element from \a xml.
 */
void UpdateCellResponsePrivate::parseUpdateCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
