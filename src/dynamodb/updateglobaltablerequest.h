// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLEREQUEST_H
#define QTAWS_UPDATEGLOBALTABLEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateGlobalTableRequest : public DynamoDbRequest {

public:
    UpdateGlobalTableRequest(const UpdateGlobalTableRequest &other);
    UpdateGlobalTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
