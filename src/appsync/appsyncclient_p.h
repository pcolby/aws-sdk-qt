// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSYNCCLIENT_P_H
#define QTAWS_APPSYNCCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AppSync {

class AppSyncClient;

class AppSyncClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppSyncClientPrivate(AppSyncClient * const q);

private:
    Q_DECLARE_PUBLIC(AppSyncClient)
    Q_DISABLE_COPY(AppSyncClientPrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
