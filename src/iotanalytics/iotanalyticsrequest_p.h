// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSREQUEST_P_H
#define QTAWS_IOTANALYTICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsRequest;

class IoTAnalyticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTAnalyticsRequest::Action action; ///< IoTAnalytics action to be performed.
    QString apiVersion;        ///< IoTAnalytics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTAnalytics request (query string) parameters. @todo?

    IoTAnalyticsRequestPrivate(const IoTAnalyticsRequest::Action action, IoTAnalyticsRequest * const q);
    IoTAnalyticsRequestPrivate(const IoTAnalyticsRequestPrivate &other, IoTAnalyticsRequest * const q);

    static QString toString(const IoTAnalyticsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTAnalyticsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
