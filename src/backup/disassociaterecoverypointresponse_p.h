// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERECOVERYPOINTRESPONSE_P_H
#define QTAWS_DISASSOCIATERECOVERYPOINTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DisassociateRecoveryPointResponse;

class DisassociateRecoveryPointResponsePrivate : public BackupResponsePrivate {

public:

    explicit DisassociateRecoveryPointResponsePrivate(DisassociateRecoveryPointResponse * const q);

    void parseDisassociateRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateRecoveryPointResponse)
    Q_DISABLE_COPY(DisassociateRecoveryPointResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
