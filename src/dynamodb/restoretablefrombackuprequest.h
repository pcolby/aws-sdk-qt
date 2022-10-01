// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMBACKUPREQUEST_H
#define QTAWS_RESTORETABLEFROMBACKUPREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableFromBackupRequestPrivate;

class QTAWSDYNAMODB_EXPORT RestoreTableFromBackupRequest : public DynamoDbRequest {

public:
    RestoreTableFromBackupRequest(const RestoreTableFromBackupRequest &other);
    RestoreTableFromBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableFromBackupRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
