// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESCLIENT_P_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesClient;

class MigrationHubRefactorSpacesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MigrationHubRefactorSpacesClientPrivate(MigrationHubRefactorSpacesClient * const q);

private:
    Q_DECLARE_PUBLIC(MigrationHubRefactorSpacesClient)
    Q_DISABLE_COPY(MigrationHubRefactorSpacesClientPrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
