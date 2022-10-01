// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPJOBRUNREQUEST_P_H
#define QTAWS_BATCHSTOPJOBRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "batchstopjobrunrequest.h"

namespace QtAws {
namespace Glue {

class BatchStopJobRunRequest;

class BatchStopJobRunRequestPrivate : public GlueRequestPrivate {

public:
    BatchStopJobRunRequestPrivate(const GlueRequest::Action action,
                                   BatchStopJobRunRequest * const q);
    BatchStopJobRunRequestPrivate(const BatchStopJobRunRequestPrivate &other,
                                   BatchStopJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchStopJobRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
