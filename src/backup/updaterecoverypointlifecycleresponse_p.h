// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYPOINTLIFECYCLERESPONSE_P_H
#define QTAWS_UPDATERECOVERYPOINTLIFECYCLERESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateRecoveryPointLifecycleResponse;

class UpdateRecoveryPointLifecycleResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateRecoveryPointLifecycleResponsePrivate(UpdateRecoveryPointLifecycleResponse * const q);

    void parseUpdateRecoveryPointLifecycleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecoveryPointLifecycleResponse)
    Q_DISABLE_COPY(UpdateRecoveryPointLifecycleResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
