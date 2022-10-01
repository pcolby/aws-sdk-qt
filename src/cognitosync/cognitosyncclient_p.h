// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOSYNCCLIENT_P_H
#define QTAWS_COGNITOSYNCCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CognitoSync {

class CognitoSyncClient;

class CognitoSyncClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CognitoSyncClientPrivate(CognitoSyncClient * const q);

private:
    Q_DECLARE_PUBLIC(CognitoSyncClient)
    Q_DISABLE_COPY(CognitoSyncClientPrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
