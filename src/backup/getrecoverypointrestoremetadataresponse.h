// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESTOREMETADATARESPONSE_H
#define QTAWS_GETRECOVERYPOINTRESTOREMETADATARESPONSE_H

#include "backupresponse.h"
#include "getrecoverypointrestoremetadatarequest.h"

namespace QtAws {
namespace Backup {

class GetRecoveryPointRestoreMetadataResponsePrivate;

class QTAWSBACKUP_EXPORT GetRecoveryPointRestoreMetadataResponse : public BackupResponse {
    Q_OBJECT

public:
    GetRecoveryPointRestoreMetadataResponse(const GetRecoveryPointRestoreMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecoveryPointRestoreMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryPointRestoreMetadataResponse)
    Q_DISABLE_COPY(GetRecoveryPointRestoreMetadataResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
