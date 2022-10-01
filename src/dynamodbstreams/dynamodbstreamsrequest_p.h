// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSREQUEST_P_H
#define QTAWS_DYNAMODBSTREAMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "dynamodbstreamsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsRequest;

class DynamoDbStreamsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DynamoDbStreamsRequest::Action action; ///< DynamoDbStreams action to be performed.
    QString apiVersion;        ///< DynamoDbStreams API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DynamoDbStreams request (query string) parameters. @todo?

    DynamoDbStreamsRequestPrivate(const DynamoDbStreamsRequest::Action action, DynamoDbStreamsRequest * const q);
    DynamoDbStreamsRequestPrivate(const DynamoDbStreamsRequestPrivate &other, DynamoDbStreamsRequest * const q);

    static QString toString(const DynamoDbStreamsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DynamoDbStreamsRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
