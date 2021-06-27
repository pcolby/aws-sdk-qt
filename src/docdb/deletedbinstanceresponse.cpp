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

#include "deletedbinstanceresponse.h"
#include "deletedbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBInstanceResponse
 * \brief The DeleteDBInstanceResponse class provides an interace for DocDB DeleteDBInstance responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBInstance
 */

/*!
 * Constructs a DeleteDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBInstanceResponse::DeleteDBInstanceResponse(
        const DeleteDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteDBInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBInstanceRequest * DeleteDBInstanceResponse::request() const
{
    return static_cast<const DeleteDBInstanceRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteDBInstance \a response.
 */
void DeleteDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteDBInstanceResponsePrivate
 * \brief The DeleteDBInstanceResponsePrivate class provides private implementation for DeleteDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBInstanceResponsePrivate object with public implementation \a q.
 */
DeleteDBInstanceResponsePrivate::DeleteDBInstanceResponsePrivate(
    DeleteDBInstanceResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteDBInstance response element from \a xml.
 */
void DeleteDBInstanceResponsePrivate::parseDeleteDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
