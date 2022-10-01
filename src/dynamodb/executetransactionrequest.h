// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTETRANSACTIONREQUEST_H
#define QTAWS_EXECUTETRANSACTIONREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ExecuteTransactionRequestPrivate;

class QTAWSDYNAMODB_EXPORT ExecuteTransactionRequest : public DynamoDbRequest {

public:
    ExecuteTransactionRequest(const ExecuteTransactionRequest &other);
    ExecuteTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteTransactionRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
