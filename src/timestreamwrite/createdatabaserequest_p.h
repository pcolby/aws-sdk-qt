// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATABASEREQUEST_P_H
#define QTAWS_CREATEDATABASEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "createdatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class CreateDatabaseRequest;

class CreateDatabaseRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    CreateDatabaseRequestPrivate(const TimestreamWriteRequest::Action action,
                                   CreateDatabaseRequest * const q);
    CreateDatabaseRequestPrivate(const CreateDatabaseRequestPrivate &other,
                                   CreateDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
