// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDREQUEST_P_H
#define QTAWS_PUTRECORDREQUEST_P_H

#include "firehoserequest_p.h"
#include "putrecordrequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordRequest;

class PutRecordRequestPrivate : public FirehoseRequestPrivate {

public:
    PutRecordRequestPrivate(const FirehoseRequest::Action action,
                                   PutRecordRequest * const q);
    PutRecordRequestPrivate(const PutRecordRequestPrivate &other,
                                   PutRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecordRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
