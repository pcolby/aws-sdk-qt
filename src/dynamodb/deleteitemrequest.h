// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEITEMREQUEST_H
#define QTAWS_DELETEITEMREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DeleteItemRequestPrivate;

class QTAWSDYNAMODB_EXPORT DeleteItemRequest : public DynamoDbRequest {

public:
    DeleteItemRequest(const DeleteItemRequest &other);
    DeleteItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
