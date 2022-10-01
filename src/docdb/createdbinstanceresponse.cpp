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
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBInstanceResponse
 * \brief The CreateDBInstanceResponse class provides an interace for DocDb CreateDBInstance responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBInstance
 */

/*!
 * Constructs a CreateDBInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBInstanceResponse::CreateDBInstanceResponse(
        const CreateDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateDBInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBInstanceRequest * CreateDBInstanceResponse::request() const
{
    Q_D(const CreateDBInstanceResponse);
    return static_cast<const CreateDBInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBInstance \a response.
 */
void CreateDBInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBInstanceResponsePrivate
 * \brief The CreateDBInstanceResponsePrivate class provides private implementation for CreateDBInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBInstanceResponsePrivate object with public implementation \a q.
 */
CreateDBInstanceResponsePrivate::CreateDBInstanceResponsePrivate(
    CreateDBInstanceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBInstance response element from \a xml.
 */
void CreateDBInstanceResponsePrivate::parseCreateDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
