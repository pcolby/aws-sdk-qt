// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSV2REQUEST_P_H
#define QTAWS_KINESISANALYTICSV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2Request;

class KinesisAnalyticsV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisAnalyticsV2Request::Action action; ///< KinesisAnalyticsV2 action to be performed.
    QString apiVersion;        ///< KinesisAnalyticsV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisAnalyticsV2 request (query string) parameters. @todo?

    KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2Request::Action action, KinesisAnalyticsV2Request * const q);
    KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2RequestPrivate &other, KinesisAnalyticsV2Request * const q);

    static QString toString(const KinesisAnalyticsV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsV2Request)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
