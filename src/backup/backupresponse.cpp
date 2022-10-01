// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupresponse.h"
#include "backupresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::BackupResponse
 * \brief The BackupResponse class provides an interface for Backup responses.
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupResponse object with parent \a parent.
 */
BackupResponse::BackupResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BackupResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BackupResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupResponsePrivate.
 */
BackupResponse::BackupResponse(BackupResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BackupResponse::parseFailure(QIODevice &response)
{
    //Q_D(BackupResponse);
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
 * \class QtAws::Backup::BackupResponsePrivate
 * \brief The BackupResponsePrivate class provides private implementation for BackupResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupResponsePrivate object with public implementation \a q.
 */
BackupResponsePrivate::BackupResponsePrivate(
    BackupResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Backup
} // namespace QtAws
