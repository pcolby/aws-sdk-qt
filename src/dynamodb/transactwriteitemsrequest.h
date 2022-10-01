// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTWRITEITEMSREQUEST_H
#define QTAWS_TRANSACTWRITEITEMSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class TransactWriteItemsRequestPrivate;

class QTAWSDYNAMODB_EXPORT TransactWriteItemsRequest : public DynamoDbRequest {

public:
    TransactWriteItemsRequest(const TransactWriteItemsRequest &other);
    TransactWriteItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransactWriteItemsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
