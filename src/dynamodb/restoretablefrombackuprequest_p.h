// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMBACKUPREQUEST_P_H
#define QTAWS_RESTORETABLEFROMBACKUPREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "restoretablefrombackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableFromBackupRequest;

class RestoreTableFromBackupRequestPrivate : public DynamoDbRequestPrivate {

public:
    RestoreTableFromBackupRequestPrivate(const DynamoDbRequest::Action action,
                                   RestoreTableFromBackupRequest * const q);
    RestoreTableFromBackupRequestPrivate(const RestoreTableFromBackupRequestPrivate &other,
                                   RestoreTableFromBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreTableFromBackupRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
