// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITERECORDSREQUEST_P_H
#define QTAWS_WRITERECORDSREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "writerecordsrequest.h"

namespace QtAws {
namespace TimestreamWrite {

class WriteRecordsRequest;

class WriteRecordsRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    WriteRecordsRequestPrivate(const TimestreamWriteRequest::Action action,
                                   WriteRecordsRequest * const q);
    WriteRecordsRequestPrivate(const WriteRecordsRequestPrivate &other,
                                   WriteRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(WriteRecordsRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
