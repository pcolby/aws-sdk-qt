// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PICLIENT_P_H
#define QTAWS_PICLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Pi {

class PiClient;

class PiClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PiClientPrivate(PiClient * const q);

private:
    Q_DECLARE_PUBLIC(PiClient)
    Q_DISABLE_COPY(PiClientPrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
