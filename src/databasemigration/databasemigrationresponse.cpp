// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
