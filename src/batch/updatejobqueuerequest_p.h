// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBQUEUEREQUEST_P_H
#define QTAWS_UPDATEJOBQUEUEREQUEST_P_H

#include "batchrequest_p.h"
#include "updatejobqueuerequest.h"

namespace QtAws {
namespace Batch {

class UpdateJobQueueRequest;

class UpdateJobQueueRequestPrivate : public BatchRequestPrivate {

public:
    UpdateJobQueueRequestPrivate(const BatchRequest::Action action,
                                   UpdateJobQueueRequest * const q);
    UpdateJobQueueRequestPrivate(const UpdateJobQueueRequestPrivate &other,
                                   UpdateJobQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
