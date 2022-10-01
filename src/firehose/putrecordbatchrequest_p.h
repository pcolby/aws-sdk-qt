// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDBATCHREQUEST_P_H
#define QTAWS_PUTRECORDBATCHREQUEST_P_H

#include "firehoserequest_p.h"
#include "putrecordbatchrequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordBatchRequest;

class PutRecordBatchRequestPrivate : public FirehoseRequestPrivate {

public:
    PutRecordBatchRequestPrivate(const FirehoseRequest::Action action,
                                   PutRecordBatchRequest * const q);
    PutRecordBatchRequestPrivate(const PutRecordBatchRequestPrivate &other,
                                   PutRecordBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecordBatchRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
