// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCCLIENT_P_H
#define QTAWS_SSOOIDCCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SsoOidc {

class SsoOidcClient;

class SsoOidcClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsoOidcClientPrivate(SsoOidcClient * const q);

private:
    Q_DECLARE_PUBLIC(SsoOidcClient)
    Q_DISABLE_COPY(SsoOidcClientPrivate)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
