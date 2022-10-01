// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESTOREMETADATARESPONSE_P_H
#define QTAWS_GETRECOVERYPOINTRESTOREMETADATARESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetRecoveryPointRestoreMetadataResponse;

class GetRecoveryPointRestoreMetadataResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetRecoveryPointRestoreMetadataResponsePrivate(GetRecoveryPointRestoreMetadataResponse * const q);

    void parseGetRecoveryPointRestoreMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecoveryPointRestoreMetadataResponse)
    Q_DISABLE_COPY(GetRecoveryPointRestoreMetadataResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
