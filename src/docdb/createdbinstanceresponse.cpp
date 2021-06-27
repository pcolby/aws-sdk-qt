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

#include "createdbinstanceresponse.h"
#include "createdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBInstanceResponse
 * \brief The CreateDBInstanceResponse class provides an interace for DocDB CreateDBInstance responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBInstance
 */

/*!
 * Constructs a CreateDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBInstanceResponse::CreateDBInstanceResponse(
        const CreateDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CreateDBInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBInstanceRequest * CreateDBInstanceResponse::request() const
{
    return static_cast<const CreateDBInstanceRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB CreateDBInstance \a response.
 */
void CreateDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CreateDBInstanceResponsePrivate
 * \brief The CreateDBInstanceResponsePrivate class provides private implementation for CreateDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBInstanceResponsePrivate object with public implementation \a q.
 */
CreateDBInstanceResponsePrivate::CreateDBInstanceResponsePrivate(
    CreateDBInstanceResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CreateDBInstance response element from \a xml.
 */
void CreateDBInstanceResponsePrivate::parseCreateDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
