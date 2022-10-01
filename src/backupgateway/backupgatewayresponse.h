// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPGATEWAYRESPONSE_H
#define QTAWS_BACKUPGATEWAYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbackupgatewayglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace BackupGateway {

class BackupGatewayResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT BackupGatewayResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BackupGatewayResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BackupGatewayResponse(BackupGatewayResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackupGatewayResponse)
    Q_DISABLE_COPY(BackupGatewayResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
