// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANAREQUEST_P_H
#define QTAWS_GRAFANAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class GrafanaRequest;

class GrafanaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GrafanaRequest::Action action; ///< Grafana action to be performed.
    QString apiVersion;        ///< Grafana API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Grafana request (query string) parameters. @todo?

    GrafanaRequestPrivate(const GrafanaRequest::Action action, GrafanaRequest * const q);
    GrafanaRequestPrivate(const GrafanaRequestPrivate &other, GrafanaRequest * const q);

    static QString toString(const GrafanaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GrafanaRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
