// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBSTRATEGYCLIENT_P_H
#define QTAWS_MIGRATIONHUBSTRATEGYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MigrationHubStrategy {

class MigrationHubStrategyClient;

class MigrationHubStrategyClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MigrationHubStrategyClientPrivate(MigrationHubStrategyClient * const q);

private:
    Q_DECLARE_PUBLIC(MigrationHubStrategyClient)
    Q_DISABLE_COPY(MigrationHubStrategyClientPrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
