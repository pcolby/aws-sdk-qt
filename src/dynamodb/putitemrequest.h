// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMREQUEST_H
#define QTAWS_PUTITEMREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class PutItemRequestPrivate;

class QTAWSDYNAMODB_EXPORT PutItemRequest : public DynamoDbRequest {

public:
    PutItemRequest(const PutItemRequest &other);
    PutItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
