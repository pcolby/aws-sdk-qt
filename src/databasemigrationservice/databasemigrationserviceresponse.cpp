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

#include "databasemigrationresponse.h"
#include "databasemigrationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationResponse
 * \brief The DatabaseMigrationResponse class provides an interface for DatabaseMigration responses.
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DatabaseMigrationResponse object with parent \a parent.
 */
DatabaseMigrationResponse::DatabaseMigrationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DatabaseMigrationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DatabaseMigrationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DatabaseMigrationResponsePrivate.
 */
DatabaseMigrationResponse::DatabaseMigrationResponse(DatabaseMigrationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DatabaseMigrationResponse::parseFailure(QIODevice &response)
{
    //Q_D(DatabaseMigrationResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationResponsePrivate
 * \brief The DatabaseMigrationResponsePrivate class provides private implementation for DatabaseMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DatabaseMigrationResponsePrivate object with public implementation \a q.
 */
DatabaseMigrationResponsePrivate::DatabaseMigrationResponsePrivate(
    DatabaseMigrationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
