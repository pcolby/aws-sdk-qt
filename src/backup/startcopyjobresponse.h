// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOPYJOBRESPONSE_H
#define QTAWS_STARTCOPYJOBRESPONSE_H

#include "backupresponse.h"
#include "startcopyjobrequest.h"

namespace QtAws {
namespace Backup {

class StartCopyJobResponsePrivate;

class QTAWSBACKUP_EXPORT StartCopyJobResponse : public BackupResponse {
    Q_OBJECT

public:
    StartCopyJobResponse(const StartCopyJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCopyJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCopyJobResponse)
    Q_DISABLE_COPY(StartCopyJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
