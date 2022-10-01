// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREQUEST_P_H
#define QTAWS_UPDATETABLEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "updatetablerequest.h"

namespace QtAws {
namespace TimestreamWrite {

class UpdateTableRequest;

class UpdateTableRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    UpdateTableRequestPrivate(const TimestreamWriteRequest::Action action,
                                   UpdateTableRequest * const q);
    UpdateTableRequestPrivate(const UpdateTableRequestPrivate &other,
                                   UpdateTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTableRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
