// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONINSIGHTSCLIENT_P_H
#define QTAWS_APPLICATIONINSIGHTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsClient;

class ApplicationInsightsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApplicationInsightsClientPrivate(ApplicationInsightsClient * const q);

private:
    Q_DECLARE_PUBLIC(ApplicationInsightsClient)
    Q_DISABLE_COPY(ApplicationInsightsClientPrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
