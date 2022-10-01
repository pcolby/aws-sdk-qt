// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYPOINTRESPONSE_P_H
#define QTAWS_DELETERECOVERYPOINTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteRecoveryPointResponse;

class DeleteRecoveryPointResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteRecoveryPointResponsePrivate(DeleteRecoveryPointResponse * const q);

    void parseDeleteRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryPointResponse)
    Q_DISABLE_COPY(DeleteRecoveryPointResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
