// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTGETITEMSREQUEST_H
#define QTAWS_TRANSACTGETITEMSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class TransactGetItemsRequestPrivate;

class QTAWSDYNAMODB_EXPORT TransactGetItemsRequest : public DynamoDbRequest {

public:
    TransactGetItemsRequest(const TransactGetItemsRequest &other);
    TransactGetItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransactGetItemsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
