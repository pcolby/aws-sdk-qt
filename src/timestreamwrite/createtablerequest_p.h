// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETABLEREQUEST_P_H
#define QTAWS_CREATETABLEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "createtablerequest.h"

namespace QtAws {
namespace TimestreamWrite {

class CreateTableRequest;

class CreateTableRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    CreateTableRequestPrivate(const TimestreamWriteRequest::Action action,
                                   CreateTableRequest * const q);
    CreateTableRequestPrivate(const CreateTableRequestPrivate &other,
                                   CreateTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTableRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
