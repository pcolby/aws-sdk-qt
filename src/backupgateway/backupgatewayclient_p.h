// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPGATEWAYCLIENT_P_H
#define QTAWS_BACKUPGATEWAYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace BackupGateway {

class BackupGatewayClient;

class BackupGatewayClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BackupGatewayClientPrivate(BackupGatewayClient * const q);

private:
    Q_DECLARE_PUBLIC(BackupGatewayClient)
    Q_DISABLE_COPY(BackupGatewayClientPrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
