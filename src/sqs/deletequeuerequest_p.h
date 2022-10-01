// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEREQUEST_P_H
#define QTAWS_DELETEQUEUEREQUEST_P_H

#include "sqsrequest_p.h"
#include "deletequeuerequest.h"

namespace QtAws {
namespace Sqs {

class DeleteQueueRequest;

class DeleteQueueRequestPrivate : public SqsRequestPrivate {

public:
    DeleteQueueRequestPrivate(const SqsRequest::Action action,
                                   DeleteQueueRequest * const q);
    DeleteQueueRequestPrivate(const DeleteQueueRequestPrivate &other,
                                   DeleteQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
