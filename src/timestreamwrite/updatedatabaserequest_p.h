// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATABASEREQUEST_P_H
#define QTAWS_UPDATEDATABASEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "updatedatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class UpdateDatabaseRequest;

class UpdateDatabaseRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    UpdateDatabaseRequestPrivate(const TimestreamWriteRequest::Action action,
                                   UpdateDatabaseRequest * const q);
    UpdateDatabaseRequestPrivate(const UpdateDatabaseRequestPrivate &other,
                                   UpdateDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
