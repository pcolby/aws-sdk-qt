// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANACLIENT_P_H
#define QTAWS_GRAFANACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Grafana {

class GrafanaClient;

class GrafanaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GrafanaClientPrivate(GrafanaClient * const q);

private:
    Q_DECLARE_PUBLIC(GrafanaClient)
    Q_DISABLE_COPY(GrafanaClientPrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
