// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPSTORAGECLIENT_P_H
#define QTAWS_BACKUPSTORAGECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace BackupStorage {

class BackupStorageClient;

class BackupStorageClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BackupStorageClientPrivate(BackupStorageClient * const q);

private:
    Q_DECLARE_PUBLIC(BackupStorageClient)
    Q_DISABLE_COPY(BackupStorageClientPrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
