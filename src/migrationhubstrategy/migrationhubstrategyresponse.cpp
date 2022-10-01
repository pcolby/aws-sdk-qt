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

#include "migrationhubstrategyresponse.h"
#include "migrationhubstrategyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyResponse
 * \brief The MigrationHubStrategyResponse class provides an interface for MigrationHubStrategy responses.
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a MigrationHubStrategyResponse object with parent \a parent.
 */
MigrationHubStrategyResponse::MigrationHubStrategyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubStrategyResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MigrationHubStrategyResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubStrategyResponsePrivate.
 */
MigrationHubStrategyResponse::MigrationHubStrategyResponse(MigrationHubStrategyResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MigrationHubStrategyResponse::parseFailure(QIODevice &response)
{
    //Q_D(MigrationHubStrategyResponse);
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
 * \class QtAws::MigrationHubStrategy::MigrationHubStrategyResponsePrivate
 * \brief The MigrationHubStrategyResponsePrivate class provides private implementation for MigrationHubStrategyResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a MigrationHubStrategyResponsePrivate object with public implementation \a q.
 */
MigrationHubStrategyResponsePrivate::MigrationHubStrategyResponsePrivate(
    MigrationHubStrategyResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
