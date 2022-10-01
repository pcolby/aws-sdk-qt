// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBQUEUEREQUEST_P_H
#define QTAWS_CREATEJOBQUEUEREQUEST_P_H

#include "batchrequest_p.h"
#include "createjobqueuerequest.h"

namespace QtAws {
namespace Batch {

class CreateJobQueueRequest;

class CreateJobQueueRequestPrivate : public BatchRequestPrivate {

public:
    CreateJobQueueRequestPrivate(const BatchRequest::Action action,
                                   CreateJobQueueRequest * const q);
    CreateJobQueueRequestPrivate(const CreateJobQueueRequestPrivate &other,
                                   CreateJobQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
