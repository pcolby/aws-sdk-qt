// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETITEMREQUEST_H
#define QTAWS_GETITEMREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class GetItemRequestPrivate;

class QTAWSDYNAMODB_EXPORT GetItemRequest : public DynamoDbRequest {

public:
    GetItemRequest(const GetItemRequest &other);
    GetItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
