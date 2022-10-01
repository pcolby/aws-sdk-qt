// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBREQUEST_P_H
#define QTAWS_TERMINATEJOBREQUEST_P_H

#include "batchrequest_p.h"
#include "terminatejobrequest.h"

namespace QtAws {
namespace Batch {

class TerminateJobRequest;

class TerminateJobRequestPrivate : public BatchRequestPrivate {

public:
    TerminateJobRequestPrivate(const BatchRequest::Action action,
                                   TerminateJobRequest * const q);
    TerminateJobRequestPrivate(const TerminateJobRequestPrivate &other,
                                   TerminateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
