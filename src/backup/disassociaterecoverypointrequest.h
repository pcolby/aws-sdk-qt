// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERECOVERYPOINTREQUEST_H
#define QTAWS_DISASSOCIATERECOVERYPOINTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DisassociateRecoveryPointRequestPrivate;

class QTAWSBACKUP_EXPORT DisassociateRecoveryPointRequest : public BackupRequest {

public:
    DisassociateRecoveryPointRequest(const DisassociateRecoveryPointRequest &other);
    DisassociateRecoveryPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
