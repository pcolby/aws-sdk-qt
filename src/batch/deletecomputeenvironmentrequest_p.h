// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPUTEENVIRONMENTREQUEST_P_H
#define QTAWS_DELETECOMPUTEENVIRONMENTREQUEST_P_H

#include "batchrequest_p.h"
#include "deletecomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class DeleteComputeEnvironmentRequest;

class DeleteComputeEnvironmentRequestPrivate : public BatchRequestPrivate {

public:
    DeleteComputeEnvironmentRequestPrivate(const BatchRequest::Action action,
                                   DeleteComputeEnvironmentRequest * const q);
    DeleteComputeEnvironmentRequestPrivate(const DeleteComputeEnvironmentRequestPrivate &other,
                                   DeleteComputeEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteComputeEnvironmentRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
