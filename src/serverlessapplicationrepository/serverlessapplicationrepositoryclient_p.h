// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_P_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryClient;

class ServerlessApplicationRepositoryClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ServerlessApplicationRepositoryClientPrivate(ServerlessApplicationRepositoryClient * const q);

private:
    Q_DECLARE_PUBLIC(ServerlessApplicationRepositoryClient)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryClientPrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
