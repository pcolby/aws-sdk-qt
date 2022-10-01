// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSCLIENT_P_H
#define QTAWS_DYNAMODBSTREAMSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsClient;

class DynamoDbStreamsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DynamoDbStreamsClientPrivate(DynamoDbStreamsClient * const q);

private:
    Q_DECLARE_PUBLIC(DynamoDbStreamsClient)
    Q_DISABLE_COPY(DynamoDbStreamsClientPrivate)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
