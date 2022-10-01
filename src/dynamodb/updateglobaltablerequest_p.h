// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALTABLEREQUEST_P_H
#define QTAWS_UPDATEGLOBALTABLEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updateglobaltablerequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateGlobalTableRequest;

class UpdateGlobalTableRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateGlobalTableRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateGlobalTableRequest * const q);
    UpdateGlobalTableRequestPrivate(const UpdateGlobalTableRequestPrivate &other,
                                   UpdateGlobalTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
