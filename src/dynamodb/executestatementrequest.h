// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTREQUEST_H
#define QTAWS_EXECUTESTATEMENTREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ExecuteStatementRequestPrivate;

class QTAWSDYNAMODB_EXPORT ExecuteStatementRequest : public DynamoDbRequest {

public:
    ExecuteStatementRequest(const ExecuteStatementRequest &other);
    ExecuteStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteStatementRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
