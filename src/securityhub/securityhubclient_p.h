// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECURITYHUBCLIENT_P_H
#define QTAWS_SECURITYHUBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SecurityHub {

class SecurityHubClient;

class SecurityHubClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SecurityHubClientPrivate(SecurityHubClient * const q);

private:
    Q_DECLARE_PUBLIC(SecurityHubClient)
    Q_DISABLE_COPY(SecurityHubClientPrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
