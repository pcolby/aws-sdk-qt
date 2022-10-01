// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSVOLUMERECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETEBSVOLUMERECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEBSVolumeRecommendationsResponse;

class GetEBSVolumeRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEBSVolumeRecommendationsResponsePrivate(GetEBSVolumeRecommendationsResponse * const q);

    void parseGetEBSVolumeRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEBSVolumeRecommendationsResponse)
    Q_DISABLE_COPY(GetEBSVolumeRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
