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

#include "applypendingmaintenanceactionresponse.h"
#include "applypendingmaintenanceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ApplyPendingMaintenanceActionResponse
 * \brief The ApplyPendingMaintenanceActionResponse class provides an interace for DocDB ApplyPendingMaintenanceAction responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponse object for \a reply to \a request, with parent \a parent.
 */
ApplyPendingMaintenanceActionResponse::ApplyPendingMaintenanceActionResponse(
        const ApplyPendingMaintenanceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ApplyPendingMaintenanceActionResponsePrivate(this), parent)
{
    setRequest(new ApplyPendingMaintenanceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApplyPendingMaintenanceActionRequest * ApplyPendingMaintenanceActionResponse::request() const
{
    return static_cast<const ApplyPendingMaintenanceActionRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB ApplyPendingMaintenanceAction \a response.
 */
void ApplyPendingMaintenanceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApplyPendingMaintenanceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ApplyPendingMaintenanceActionResponsePrivate
 * \brief The ApplyPendingMaintenanceActionResponsePrivate class provides private implementation for ApplyPendingMaintenanceActionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponsePrivate object with public implementation \a q.
 */
ApplyPendingMaintenanceActionResponsePrivate::ApplyPendingMaintenanceActionResponsePrivate(
    ApplyPendingMaintenanceActionResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ApplyPendingMaintenanceAction response element from \a xml.
 */
void ApplyPendingMaintenanceActionResponsePrivate::parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyPendingMaintenanceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
