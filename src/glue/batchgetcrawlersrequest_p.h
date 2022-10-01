// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCRAWLERSREQUEST_P_H
#define QTAWS_BATCHGETCRAWLERSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetCrawlersRequest;

class BatchGetCrawlersRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetCrawlersRequestPrivate(const GlueRequest::Action action,
                                   BatchGetCrawlersRequest * const q);
    BatchGetCrawlersRequestPrivate(const BatchGetCrawlersRequestPrivate &other,
                                   BatchGetCrawlersRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetCrawlersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
