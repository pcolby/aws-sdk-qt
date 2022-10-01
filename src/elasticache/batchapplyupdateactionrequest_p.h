// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHAPPLYUPDATEACTIONREQUEST_P_H
#define QTAWS_BATCHAPPLYUPDATEACTIONREQUEST_P_H

#include "elasticacherequest_p.h"
#include "batchapplyupdateactionrequest.h"

namespace QtAws {
namespace ElastiCache {

class BatchApplyUpdateActionRequest;

class BatchApplyUpdateActionRequestPrivate : public ElastiCacheRequestPrivate {

public:
    BatchApplyUpdateActionRequestPrivate(const ElastiCacheRequest::Action action,
                                   BatchApplyUpdateActionRequest * const q);
    BatchApplyUpdateActionRequestPrivate(const BatchApplyUpdateActionRequestPrivate &other,
                                   BatchApplyUpdateActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchApplyUpdateActionRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
