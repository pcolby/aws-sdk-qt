// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_P_H
#define QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "exportec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEC2InstanceRecommendationsRequest;

class ExportEC2InstanceRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    ExportEC2InstanceRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   ExportEC2InstanceRecommendationsRequest * const q);
    ExportEC2InstanceRecommendationsRequestPrivate(const ExportEC2InstanceRecommendationsRequestPrivate &other,
                                   ExportEC2InstanceRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
