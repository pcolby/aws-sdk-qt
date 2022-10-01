// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOPYJOBRESPONSE_P_H
#define QTAWS_STARTCOPYJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class StartCopyJobResponse;

class StartCopyJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit StartCopyJobResponsePrivate(StartCopyJobResponse * const q);

    void parseStartCopyJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCopyJobResponse)
    Q_DISABLE_COPY(StartCopyJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
