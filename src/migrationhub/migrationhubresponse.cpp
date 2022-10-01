// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
