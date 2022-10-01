// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMETOLIVEREQUEST_P_H
#define QTAWS_UPDATETIMETOLIVEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updatetimetoliverequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTimeToLiveRequest;

class UpdateTimeToLiveRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateTimeToLiveRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateTimeToLiveRequest * const q);
    UpdateTimeToLiveRequestPrivate(const UpdateTimeToLiveRequestPrivate &other,
                                   UpdateTimeToLiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTimeToLiveRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
