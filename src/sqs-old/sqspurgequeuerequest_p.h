// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSPURGEQUEUEREQUEST_P_H
#define SQSPURGEQUEUEREQUEST_P_H

#include "sqspurgequeuerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsPurgeQueueRequest;

class SqsPurgeQueueRequestPrivate : public SqsRequestPrivate {

public:
    SqsPurgeQueueRequestPrivate(const SqsRequest::Action action,
                                   SqsPurgeQueueRequest * const q);
    SqsPurgeQueueRequestPrivate(const SqsPurgeQueueRequestPrivate &other,
                                   SqsPurgeQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsPurgeQueueRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
