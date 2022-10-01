// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDSREQUEST_P_H
#define QTAWS_PUTRECORDSREQUEST_P_H

#include "kinesisrequest_p.h"
#include "putrecordsrequest.h"

namespace QtAws {
namespace Kinesis {

class PutRecordsRequest;

class PutRecordsRequestPrivate : public KinesisRequestPrivate {

public:
    PutRecordsRequestPrivate(const KinesisRequest::Action action,
                                   PutRecordsRequest * const q);
    PutRecordsRequestPrivate(const PutRecordsRequestPrivate &other,
                                   PutRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecordsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
