// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2CLIENT_P_H
#define QTAWS_WAFV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Wafv2 {

class Wafv2Client;

class Wafv2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Wafv2ClientPrivate(Wafv2Client * const q);

private:
    Q_DECLARE_PUBLIC(Wafv2Client)
    Q_DISABLE_COPY(Wafv2ClientPrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
