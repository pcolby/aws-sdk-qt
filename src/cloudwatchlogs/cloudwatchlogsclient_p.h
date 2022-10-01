// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHLOGSCLIENT_P_H
#define QTAWS_CLOUDWATCHLOGSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsClient;

class CloudWatchLogsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudWatchLogsClientPrivate(CloudWatchLogsClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudWatchLogsClient)
    Q_DISABLE_COPY(CloudWatchLogsClientPrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
