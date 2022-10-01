// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPCLIENT_P_H
#define QTAWS_BACKUPCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Backup {

class BackupClient;

class BackupClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BackupClientPrivate(BackupClient * const q);

private:
    Q_DECLARE_PUBLIC(BackupClient)
    Q_DISABLE_COPY(BackupClientPrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
