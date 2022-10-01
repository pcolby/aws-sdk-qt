// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLYCLIENT_P_H
#define QTAWS_POLLYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Polly {

class PollyClient;

class PollyClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PollyClientPrivate(PollyClient * const q);

private:
    Q_DECLARE_PUBLIC(PollyClient)
    Q_DISABLE_COPY(PollyClientPrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
