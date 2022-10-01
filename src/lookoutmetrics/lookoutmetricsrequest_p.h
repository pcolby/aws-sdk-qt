// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTMETRICSREQUEST_P_H
#define QTAWS_LOOKOUTMETRICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class LookoutMetricsRequest;

class LookoutMetricsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LookoutMetricsRequest::Action action; ///< LookoutMetrics action to be performed.
    QString apiVersion;        ///< LookoutMetrics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LookoutMetrics request (query string) parameters. @todo?

    LookoutMetricsRequestPrivate(const LookoutMetricsRequest::Action action, LookoutMetricsRequest * const q);
    LookoutMetricsRequestPrivate(const LookoutMetricsRequestPrivate &other, LookoutMetricsRequest * const q);

    static QString toString(const LookoutMetricsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LookoutMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
