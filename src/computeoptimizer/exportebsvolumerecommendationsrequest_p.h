// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSREQUEST_P_H
#define QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "exportebsvolumerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEBSVolumeRecommendationsRequest;

class ExportEBSVolumeRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    ExportEBSVolumeRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   ExportEBSVolumeRecommendationsRequest * const q);
    ExportEBSVolumeRecommendationsRequestPrivate(const ExportEBSVolumeRecommendationsRequestPrivate &other,
                                   ExportEBSVolumeRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportEBSVolumeRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
