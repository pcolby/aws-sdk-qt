/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DYNAMODBCLIENTREQUEST_P_H
#define QTAWS_DYNAMODBCLIENTREQUEST_P_H

#include "dynamodb_p.h"
#include "dynamodbclientrequest.h"

namespace QtAws {
namespace DynamoDB {

class DynamoDBClientRequest;

class QTAWS_EXPORT DynamoDBClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DynamoDBClientRequest::Action action; ///< DynamoDB action to be performed.
    QString apiVersion;        ///< DynamoDB API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DynamoDB request (query string) parameters. @todo?

    DynamoDBClientRequestPrivate(const DynamoDBClientRequest::Action action, DynamoDBClientRequest * const q);
    DynamoDBClientRequestPrivate(const DynamoDBClientRequestPrivate &other, DynamoDBClientRequest * const q);

    static QString toString(const DynamoDBClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DynamoDBClientRequest)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
