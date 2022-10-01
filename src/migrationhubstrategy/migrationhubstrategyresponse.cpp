// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
