// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEFEATUREREQUEST_P_H
#define QTAWS_EVALUATEFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "evaluatefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class EvaluateFeatureRequest;

class EvaluateFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    EvaluateFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   EvaluateFeatureRequest * const q);
    EvaluateFeatureRequestPrivate(const EvaluateFeatureRequestPrivate &other,
                                   EvaluateFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(EvaluateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
