// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEFEATUREREQUEST_P_H
#define QTAWS_BATCHEVALUATEFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "batchevaluatefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class BatchEvaluateFeatureRequest;

class BatchEvaluateFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    BatchEvaluateFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   BatchEvaluateFeatureRequest * const q);
    BatchEvaluateFeatureRequestPrivate(const BatchEvaluateFeatureRequestPrivate &other,
                                   BatchEvaluateFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchEvaluateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
