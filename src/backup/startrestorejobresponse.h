// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESTOREJOBRESPONSE_H
#define QTAWS_STARTRESTOREJOBRESPONSE_H

#include "backupresponse.h"
#include "startrestorejobrequest.h"

namespace QtAws {
namespace Backup {

class StartRestoreJobResponsePrivate;

class QTAWSBACKUP_EXPORT StartRestoreJobResponse : public BackupResponse {
    Q_OBJECT

public:
    StartRestoreJobResponse(const StartRestoreJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRestoreJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRestoreJobResponse)
    Q_DISABLE_COPY(StartRestoreJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
