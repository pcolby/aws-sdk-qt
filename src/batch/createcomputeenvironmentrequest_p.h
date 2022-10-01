// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTEENVIRONMENTREQUEST_P_H
#define QTAWS_CREATECOMPUTEENVIRONMENTREQUEST_P_H

#include "batchrequest_p.h"
#include "createcomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class CreateComputeEnvironmentRequest;

class CreateComputeEnvironmentRequestPrivate : public BatchRequestPrivate {

public:
    CreateComputeEnvironmentRequestPrivate(const BatchRequest::Action action,
                                   CreateComputeEnvironmentRequest * const q);
    CreateComputeEnvironmentRequestPrivate(const CreateComputeEnvironmentRequestPrivate &other,
                                   CreateComputeEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateComputeEnvironmentRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
