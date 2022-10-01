// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECRETSMANAGERCLIENT_P_H
#define QTAWS_SECRETSMANAGERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SecretsManager {

class SecretsManagerClient;

class SecretsManagerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SecretsManagerClientPrivate(SecretsManagerClient * const q);

private:
    Q_DECLARE_PUBLIC(SecretsManagerClient)
    Q_DISABLE_COPY(SecretsManagerClientPrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
