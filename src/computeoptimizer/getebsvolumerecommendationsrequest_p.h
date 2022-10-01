// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSVOLUMERECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETEBSVOLUMERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getebsvolumerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEBSVolumeRecommendationsRequest;

class GetEBSVolumeRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEBSVolumeRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEBSVolumeRecommendationsRequest * const q);
    GetEBSVolumeRecommendationsRequestPrivate(const GetEBSVolumeRecommendationsRequestPrivate &other,
                                   GetEBSVolumeRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEBSVolumeRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
