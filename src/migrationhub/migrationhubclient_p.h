// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCLIENT_P_H
#define QTAWS_MIGRATIONHUBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MigrationHub {

class MigrationHubClient;

class MigrationHubClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MigrationHubClientPrivate(MigrationHubClient * const q);

private:
    Q_DECLARE_PUBLIC(MigrationHubClient)
    Q_DISABLE_COPY(MigrationHubClientPrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
