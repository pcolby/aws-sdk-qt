// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "migrationhubconfigresponse.h"
#include "migrationhubconfigresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::MigrationHubConfigResponse
 * \brief The MigrationHubConfigResponse class provides an interface for MigrationHubConfig responses.
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a MigrationHubConfigResponse object with parent \a parent.
 */
MigrationHubConfigResponse::MigrationHubConfigResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MigrationHubConfigResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MigrationHubConfigResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubConfigResponsePrivate.
 */
MigrationHubConfigResponse::MigrationHubConfigResponse(MigrationHubConfigResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MigrationHubConfigResponse::parseFailure(QIODevice &response)
{
    //Q_D(MigrationHubConfigResponse);
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
 * \class QtAws::MigrationHubConfig::MigrationHubConfigResponsePrivate
 * \brief The MigrationHubConfigResponsePrivate class provides private implementation for MigrationHubConfigResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a MigrationHubConfigResponsePrivate object with public implementation \a q.
 */
MigrationHubConfigResponsePrivate::MigrationHubConfigResponsePrivate(
    MigrationHubConfigResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MigrationHubConfig
} // namespace QtAws
