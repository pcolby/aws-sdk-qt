// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOCLIENT_P_H
#define QTAWS_SSOCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sso {

class SsoClient;

class SsoClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsoClientPrivate(SsoClient * const q);

private:
    Q_DECLARE_PUBLIC(SsoClient)
    Q_DISABLE_COPY(SsoClientPrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
