// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYPOINTLIFECYCLERESPONSE_H
#define QTAWS_UPDATERECOVERYPOINTLIFECYCLERESPONSE_H

#include "backupresponse.h"
#include "updaterecoverypointlifecyclerequest.h"

namespace QtAws {
namespace Backup {

class UpdateRecoveryPointLifecycleResponsePrivate;

class QTAWSBACKUP_EXPORT UpdateRecoveryPointLifecycleResponse : public BackupResponse {
    Q_OBJECT

public:
    UpdateRecoveryPointLifecycleResponse(const UpdateRecoveryPointLifecycleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecoveryPointLifecycleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecoveryPointLifecycleResponse)
    Q_DISABLE_COPY(UpdateRecoveryPointLifecycleResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
