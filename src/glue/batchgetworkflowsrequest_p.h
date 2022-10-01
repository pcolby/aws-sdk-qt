// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETWORKFLOWSREQUEST_P_H
#define QTAWS_BATCHGETWORKFLOWSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetworkflowsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetWorkflowsRequest;

class BatchGetWorkflowsRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetWorkflowsRequestPrivate(const GlueRequest::Action action,
                                   BatchGetWorkflowsRequest * const q);
    BatchGetWorkflowsRequestPrivate(const BatchGetWorkflowsRequestPrivate &other,
                                   BatchGetWorkflowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetWorkflowsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
