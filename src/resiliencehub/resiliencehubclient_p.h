// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBCLIENT_P_H
#define QTAWS_RESILIENCEHUBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubClient;

class ResilienceHubClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ResilienceHubClientPrivate(ResilienceHubClient * const q);

private:
    Q_DECLARE_PUBLIC(ResilienceHubClient)
    Q_DISABLE_COPY(ResilienceHubClientPrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
