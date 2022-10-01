// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBQUEUEREQUEST_P_H
#define QTAWS_DELETEJOBQUEUEREQUEST_P_H

#include "batchrequest_p.h"
#include "deletejobqueuerequest.h"

namespace QtAws {
namespace Batch {

class DeleteJobQueueRequest;

class DeleteJobQueueRequestPrivate : public BatchRequestPrivate {

public:
    DeleteJobQueueRequestPrivate(const BatchRequest::Action action,
                                   DeleteJobQueueRequest * const q);
    DeleteJobQueueRequestPrivate(const DeleteJobQueueRequestPrivate &other,
                                   DeleteJobQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
