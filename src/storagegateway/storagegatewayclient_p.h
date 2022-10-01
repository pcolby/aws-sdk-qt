// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STORAGEGATEWAYCLIENT_P_H
#define QTAWS_STORAGEGATEWAYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace StorageGateway {

class StorageGatewayClient;

class StorageGatewayClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit StorageGatewayClientPrivate(StorageGatewayClient * const q);

private:
    Q_DECLARE_PUBLIC(StorageGatewayClient)
    Q_DISABLE_COPY(StorageGatewayClientPrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
