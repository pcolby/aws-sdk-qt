// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_H
#define QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableToPointInTimeRequestPrivate;

class QTAWSDYNAMODB_EXPORT RestoreTableToPointInTimeRequest : public DynamoDbRequest {

public:
    RestoreTableToPointInTimeRequest(const RestoreTableToPointInTimeRequest &other);
    RestoreTableToPointInTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableToPointInTimeRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
