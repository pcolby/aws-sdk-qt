// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETJOBSREQUEST_P_H
#define QTAWS_BATCHGETJOBSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetjobsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetJobsRequest;

class BatchGetJobsRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetJobsRequestPrivate(const GlueRequest::Action action,
                                   BatchGetJobsRequest * const q);
    BatchGetJobsRequestPrivate(const BatchGetJobsRequestPrivate &other,
                                   BatchGetJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetJobsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
