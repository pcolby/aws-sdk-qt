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

#include "restoredbclustertopointintimeresponse.h"
#include "restoredbclustertopointintimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeResponse
 * \brief The RestoreDBClusterToPointInTimeResponse class provides an interace for DocDb RestoreDBClusterToPointInTime responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterToPointInTime
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreDBClusterToPointInTimeResponse::RestoreDBClusterToPointInTimeResponse(
        const RestoreDBClusterToPointInTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RestoreDBClusterToPointInTimeResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterToPointInTimeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreDBClusterToPointInTimeRequest * RestoreDBClusterToPointInTimeResponse::request() const
{
    Q_D(const RestoreDBClusterToPointInTimeResponse);
    return static_cast<const RestoreDBClusterToPointInTimeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RestoreDBClusterToPointInTime \a response.
 */
void RestoreDBClusterToPointInTimeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreDBClusterToPointInTimeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeResponsePrivate
 * \brief The RestoreDBClusterToPointInTimeResponsePrivate class provides private implementation for RestoreDBClusterToPointInTimeResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeResponsePrivate object with public implementation \a q.
 */
RestoreDBClusterToPointInTimeResponsePrivate::RestoreDBClusterToPointInTimeResponsePrivate(
    RestoreDBClusterToPointInTimeResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RestoreDBClusterToPointInTime response element from \a xml.
 */
void RestoreDBClusterToPointInTimeResponsePrivate::parseRestoreDBClusterToPointInTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterToPointInTimeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
