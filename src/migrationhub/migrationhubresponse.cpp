/*
    Copyright 2013-2018 Paul Colby

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

#include "migrationhubresponse.h"
#include "migrationhubresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::MigrationHubResponse
 * \brief The MigrationHubResponse class provides an interface for MigrationHub responses.
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a MigrationHubResponse object with parent \a parent.
 */
MigrationHubResponse::MigrationHubResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MigrationHubResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubResponsePrivate.
 */
MigrationHubResponse::MigrationHubResponse(MigrationHubResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MigrationHubResponse::parseFailure(QIODevice &response)
{
    //Q_D(MigrationHubResponse);
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
 * \class QtAws::MigrationHub::MigrationHubResponsePrivate
 * \brief The MigrationHubResponsePrivate class provides private implementation for MigrationHubResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a MigrationHubResponsePrivate object with public implementation \a q.
 */
MigrationHubResponsePrivate::MigrationHubResponsePrivate(
    MigrationHubResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MigrationHub
} // namespace QtAws
