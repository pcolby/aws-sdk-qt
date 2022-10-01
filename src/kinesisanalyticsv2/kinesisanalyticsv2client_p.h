// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSV2CLIENT_P_H
#define QTAWS_KINESISANALYTICSV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2Client;

class KinesisAnalyticsV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisAnalyticsV2ClientPrivate(KinesisAnalyticsV2Client * const q);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsV2Client)
    Q_DISABLE_COPY(KinesisAnalyticsV2ClientPrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
