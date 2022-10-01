// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEREQUEST_P_H
#define QTAWS_DELETETABLEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "deletetablerequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DeleteTableRequest;

class DeleteTableRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    DeleteTableRequestPrivate(const TimestreamWriteRequest::Action action,
                                   DeleteTableRequest * const q);
    DeleteTableRequestPrivate(const DeleteTableRequestPrivate &other,
                                   DeleteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTableRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
