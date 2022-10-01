// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEITEMREQUEST_H
#define QTAWS_UPDATEITEMREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateItemRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateItemRequest : public DynamoDbRequest {

public:
    UpdateItemRequest(const UpdateItemRequest &other);
    UpdateItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
