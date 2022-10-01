// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATABASEREQUEST_P_H
#define QTAWS_DELETEDATABASEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "deletedatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DeleteDatabaseRequest;

class DeleteDatabaseRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    DeleteDatabaseRequestPrivate(const TimestreamWriteRequest::Action action,
                                   DeleteDatabaseRequest * const q);
    DeleteDatabaseRequestPrivate(const DeleteDatabaseRequestPrivate &other,
                                   DeleteDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
