// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTINUOUSBACKUPSREQUEST_P_H
#define QTAWS_UPDATECONTINUOUSBACKUPSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updatecontinuousbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContinuousBackupsRequest;

class UpdateContinuousBackupsRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateContinuousBackupsRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateContinuousBackupsRequest * const q);
    UpdateContinuousBackupsRequestPrivate(const UpdateContinuousBackupsRequestPrivate &other,
                                   UpdateContinuousBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContinuousBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
