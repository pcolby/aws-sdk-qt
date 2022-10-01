// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSREQUEST_P_H
#define QTAWS_KINESISANALYTICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class KinesisAnalyticsRequest;

class KinesisAnalyticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisAnalyticsRequest::Action action; ///< KinesisAnalytics action to be performed.
    QString apiVersion;        ///< KinesisAnalytics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisAnalytics request (query string) parameters. @todo?

    KinesisAnalyticsRequestPrivate(const KinesisAnalyticsRequest::Action action, KinesisAnalyticsRequest * const q);
    KinesisAnalyticsRequestPrivate(const KinesisAnalyticsRequestPrivate &other, KinesisAnalyticsRequest * const q);

    static QString toString(const KinesisAnalyticsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
