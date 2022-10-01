// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESTOREJOBRESPONSE_P_H
#define QTAWS_STARTRESTOREJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class StartRestoreJobResponse;

class StartRestoreJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit StartRestoreJobResponsePrivate(StartRestoreJobResponse * const q);

    void parseStartRestoreJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRestoreJobResponse)
    Q_DISABLE_COPY(StartRestoreJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
