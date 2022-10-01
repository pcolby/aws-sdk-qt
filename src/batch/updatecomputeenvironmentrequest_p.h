// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPUTEENVIRONMENTREQUEST_P_H
#define QTAWS_UPDATECOMPUTEENVIRONMENTREQUEST_P_H

#include "batchrequest_p.h"
#include "updatecomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class UpdateComputeEnvironmentRequest;

class UpdateComputeEnvironmentRequestPrivate : public BatchRequestPrivate {

public:
    UpdateComputeEnvironmentRequestPrivate(const BatchRequest::Action action,
                                   UpdateComputeEnvironmentRequest * const q);
    UpdateComputeEnvironmentRequestPrivate(const UpdateComputeEnvironmentRequestPrivate &other,
                                   UpdateComputeEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateComputeEnvironmentRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
