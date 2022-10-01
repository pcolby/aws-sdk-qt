// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALTABLEREQUEST_P_H
#define QTAWS_CREATEGLOBALTABLEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "createglobaltablerequest.h"

namespace QtAws {
namespace DynamoDb {

class CreateGlobalTableRequest;

class CreateGlobalTableRequestPrivate : public DynamoDbRequestPrivate {

public:
    CreateGlobalTableRequestPrivate(const DynamoDbRequest::Action action,
                                   CreateGlobalTableRequest * const q);
    CreateGlobalTableRequestPrivate(const CreateGlobalTableRequestPrivate &other,
                                   CreateGlobalTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
