// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPRESPONSE_H
#define QTAWS_BACKUPRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbackupglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Backup {

class BackupResponsePrivate;

class QTAWSBACKUP_EXPORT BackupResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BackupResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BackupResponse(BackupResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackupResponse)
    Q_DISABLE_COPY(BackupResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
