// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBREQUEST_P_H
#define QTAWS_DYNAMODBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DynamoDbRequest;

class DynamoDbRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DynamoDbRequest::Action action; ///< DynamoDb action to be performed.
    QString apiVersion;        ///< DynamoDb API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DynamoDb request (query string) parameters. @todo?

    DynamoDbRequestPrivate(const DynamoDbRequest::Action action, DynamoDbRequest * const q);
    DynamoDbRequestPrivate(const DynamoDbRequestPrivate &other, DynamoDbRequest * const q);

    static QString toString(const DynamoDbRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DynamoDbRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
