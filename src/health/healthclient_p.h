// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHCLIENT_P_H
#define QTAWS_HEALTHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Health {

class HealthClient;

class HealthClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit HealthClientPrivate(HealthClient * const q);

private:
    Q_DECLARE_PUBLIC(HealthClient)
    Q_DISABLE_COPY(HealthClientPrivate)

};

} // namespace Health
} // namespace QtAws

#endif
