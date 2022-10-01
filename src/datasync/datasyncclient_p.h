// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATASYNCCLIENT_P_H
#define QTAWS_DATASYNCCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DataSync {

class DataSyncClient;

class DataSyncClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DataSyncClientPrivate(DataSyncClient * const q);

private:
    Q_DECLARE_PUBLIC(DataSyncClient)
    Q_DISABLE_COPY(DataSyncClientPrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
