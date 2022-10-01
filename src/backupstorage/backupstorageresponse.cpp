// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupstorageresponse.h"
#include "backupstorageresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::BackupStorageResponse
 * \brief The BackupStorageResponse class provides an interface for BackupStorage responses.
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a BackupStorageResponse object with parent \a parent.
 */
BackupStorageResponse::BackupStorageResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BackupStorageResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BackupStorageResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupStorageResponsePrivate.
 */
BackupStorageResponse::BackupStorageResponse(BackupStorageResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BackupStorageResponse::parseFailure(QIODevice &response)
{
    //Q_D(BackupStorageResponse);
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
 * \class QtAws::BackupStorage::BackupStorageResponsePrivate
 * \brief The BackupStorageResponsePrivate class provides private implementation for BackupStorageResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a BackupStorageResponsePrivate object with public implementation \a q.
 */
BackupStorageResponsePrivate::BackupStorageResponsePrivate(
    BackupStorageResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace BackupStorage
} // namespace QtAws
