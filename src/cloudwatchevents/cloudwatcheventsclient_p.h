// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHEVENTSCLIENT_P_H
#define QTAWS_CLOUDWATCHEVENTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsClient;

class CloudWatchEventsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudWatchEventsClientPrivate(CloudWatchEventsClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudWatchEventsClient)
    Q_DISABLE_COPY(CloudWatchEventsClientPrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
