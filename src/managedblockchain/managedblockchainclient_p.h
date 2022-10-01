// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINCLIENT_P_H
#define QTAWS_MANAGEDBLOCKCHAINCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainClient;

class ManagedBlockchainClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ManagedBlockchainClientPrivate(ManagedBlockchainClient * const q);

private:
    Q_DECLARE_PUBLIC(ManagedBlockchainClient)
    Q_DISABLE_COPY(ManagedBlockchainClientPrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
