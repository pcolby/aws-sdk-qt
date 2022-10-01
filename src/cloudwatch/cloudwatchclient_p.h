// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHCLIENT_P_H
#define QTAWS_CLOUDWATCHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudWatch {

class CloudWatchClient;

class CloudWatchClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudWatchClientPrivate(CloudWatchClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudWatchClient)
    Q_DISABLE_COPY(CloudWatchClientPrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
