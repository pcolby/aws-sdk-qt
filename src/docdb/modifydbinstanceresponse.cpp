/*
    Copyright 2013-2020 Paul Colby

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

#include "modifydbinstanceresponse.h"
#include "modifydbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBInstanceResponse
 * \brief The ModifyDBInstanceResponse class provides an interace for DocDB ModifyDBInstance responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBInstance
 */

/*!
 * Constructs a ModifyDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyDBInstanceResponse::ModifyDBInstanceResponse(
        const ModifyDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new ModifyDBInstanceResponsePrivate(this), parent)
{
    setRequest(new ModifyDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyDBInstanceRequest * ModifyDBInstanceResponse::request() const
{
    Q_D(const ModifyDBInstanceResponse);
    return static_cast<const ModifyDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB ModifyDBInstance \a response.
 */
void ModifyDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::ModifyDBInstanceResponsePrivate
 * \brief The ModifyDBInstanceResponsePrivate class provides private implementation for ModifyDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBInstanceResponsePrivate object with public implementation \a q.
 */
ModifyDBInstanceResponsePrivate::ModifyDBInstanceResponsePrivate(
    ModifyDBInstanceResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB ModifyDBInstance response element from \a xml.
 */
void ModifyDBInstanceResponsePrivate::parseModifyDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
