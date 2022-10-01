// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBRESPONSE_H
#define QTAWS_DYNAMODBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdynamodbglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DynamoDb {

class DynamoDbResponsePrivate;

class QTAWSDYNAMODB_EXPORT DynamoDbResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DynamoDbResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DynamoDbResponse(DynamoDbResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DynamoDbResponse)
    Q_DISABLE_COPY(DynamoDbResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
