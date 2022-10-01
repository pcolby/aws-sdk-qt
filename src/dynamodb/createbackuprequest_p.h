// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPREQUEST_P_H
#define QTAWS_CREATEBACKUPREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "createbackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class CreateBackupRequest;

class CreateBackupRequestPrivate : public DynamoDbRequestPrivate {

public:
    CreateBackupRequestPrivate(const DynamoDbRequest::Action action,
                                   CreateBackupRequest * const q);
    CreateBackupRequestPrivate(const CreateBackupRequestPrivate &other,
                                   CreateBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
