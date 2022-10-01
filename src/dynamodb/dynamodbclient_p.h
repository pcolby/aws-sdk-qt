// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBCLIENT_P_H
#define QTAWS_DYNAMODBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DynamoDb {

class DynamoDbClient;

class DynamoDbClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DynamoDbClientPrivate(DynamoDbClient * const q);

private:
    Q_DECLARE_PUBLIC(DynamoDbClient)
    Q_DISABLE_COPY(DynamoDbClientPrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
