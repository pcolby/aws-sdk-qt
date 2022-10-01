// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERECOVERYPOINTRESPONSE_H
#define QTAWS_DISASSOCIATERECOVERYPOINTRESPONSE_H

#include "backupresponse.h"
#include "disassociaterecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DisassociateRecoveryPointResponsePrivate;

class QTAWSBACKUP_EXPORT DisassociateRecoveryPointResponse : public BackupResponse {
    Q_OBJECT

public:
    DisassociateRecoveryPointResponse(const DisassociateRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRecoveryPointResponse)
    Q_DISABLE_COPY(DisassociateRecoveryPointResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
