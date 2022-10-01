// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALTABLEREQUEST_H
#define QTAWS_CREATEGLOBALTABLEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class CreateGlobalTableRequestPrivate;

class QTAWSDYNAMODB_EXPORT CreateGlobalTableRequest : public DynamoDbRequest {

public:
    CreateGlobalTableRequest(const CreateGlobalTableRequest &other);
    CreateGlobalTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
