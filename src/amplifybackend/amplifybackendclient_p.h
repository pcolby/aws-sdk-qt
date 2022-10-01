// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYBACKENDCLIENT_P_H
#define QTAWS_AMPLIFYBACKENDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendClient;

class AmplifyBackendClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AmplifyBackendClientPrivate(AmplifyBackendClient * const q);

private:
    Q_DECLARE_PUBLIC(AmplifyBackendClient)
    Q_DISABLE_COPY(AmplifyBackendClientPrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
