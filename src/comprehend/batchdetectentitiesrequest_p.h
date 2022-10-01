// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTENTITIESREQUEST_P_H
#define QTAWS_BATCHDETECTENTITIESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetectentitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectEntitiesRequest;

class BatchDetectEntitiesRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectEntitiesRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectEntitiesRequest * const q);
    BatchDetectEntitiesRequestPrivate(const BatchDetectEntitiesRequestPrivate &other,
                                   BatchDetectEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
