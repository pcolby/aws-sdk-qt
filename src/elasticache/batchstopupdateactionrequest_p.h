// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPUPDATEACTIONREQUEST_P_H
#define QTAWS_BATCHSTOPUPDATEACTIONREQUEST_P_H

#include "elasticacherequest_p.h"
#include "batchstopupdateactionrequest.h"

namespace QtAws {
namespace ElastiCache {

class BatchStopUpdateActionRequest;

class BatchStopUpdateActionRequestPrivate : public ElastiCacheRequestPrivate {

public:
    BatchStopUpdateActionRequestPrivate(const ElastiCacheRequest::Action action,
                                   BatchStopUpdateActionRequest * const q);
    BatchStopUpdateActionRequestPrivate(const BatchStopUpdateActionRequestPrivate &other,
                                   BatchStopUpdateActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchStopUpdateActionRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
