// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYPOINTRESPONSE_H
#define QTAWS_DELETERECOVERYPOINTRESPONSE_H

#include "backupresponse.h"
#include "deleterecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DeleteRecoveryPointResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteRecoveryPointResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteRecoveryPointResponse(const DeleteRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryPointResponse)
    Q_DISABLE_COPY(DeleteRecoveryPointResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
