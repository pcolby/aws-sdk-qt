// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFCLIENT_P_H
#define QTAWS_WAFCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Waf {

class WafClient;

class WafClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WafClientPrivate(WafClient * const q);

private:
    Q_DECLARE_PUBLIC(WafClient)
    Q_DISABLE_COPY(WafClientPrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
