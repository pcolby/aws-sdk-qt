/*
    Copyright 2013-2019 Paul Colby

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

#include "describependingmaintenanceactionsresponse.h"
#include "describependingmaintenanceactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribePendingMaintenanceActionsResponse
 * \brief The DescribePendingMaintenanceActionsResponse class provides an interace for DocDB DescribePendingMaintenanceActions responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describePendingMaintenanceActions
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePendingMaintenanceActionsResponse::DescribePendingMaintenanceActionsResponse(
        const DescribePendingMaintenanceActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribePendingMaintenanceActionsResponsePrivate(this), parent)
{
    setRequest(new DescribePendingMaintenanceActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePendingMaintenanceActionsRequest * DescribePendingMaintenanceActionsResponse::request() const
{
    Q_D(const DescribePendingMaintenanceActionsResponse);
    return static_cast<const DescribePendingMaintenanceActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DescribePendingMaintenanceActions \a response.
 */
void DescribePendingMaintenanceActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePendingMaintenanceActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribePendingMaintenanceActionsResponsePrivate
 * \brief The DescribePendingMaintenanceActionsResponsePrivate class provides private implementation for DescribePendingMaintenanceActionsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsResponsePrivate object with public implementation \a q.
 */
DescribePendingMaintenanceActionsResponsePrivate::DescribePendingMaintenanceActionsResponsePrivate(
    DescribePendingMaintenanceActionsResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribePendingMaintenanceActions response element from \a xml.
 */
void DescribePendingMaintenanceActionsResponsePrivate::parseDescribePendingMaintenanceActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePendingMaintenanceActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
