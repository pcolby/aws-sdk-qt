// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPSTORAGERESPONSE_H
#define QTAWS_BACKUPSTORAGERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbackupstorageglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace BackupStorage {

class BackupStorageResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT BackupStorageResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BackupStorageResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BackupStorageResponse(BackupStorageResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackupStorageResponse)
    Q_DISABLE_COPY(BackupStorageResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
