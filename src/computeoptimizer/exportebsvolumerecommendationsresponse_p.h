// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSRESPONSE_P_H
#define QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEBSVolumeRecommendationsResponse;

class ExportEBSVolumeRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit ExportEBSVolumeRecommendationsResponsePrivate(ExportEBSVolumeRecommendationsResponse * const q);

    void parseExportEBSVolumeRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportEBSVolumeRecommendationsResponse)
    Q_DISABLE_COPY(ExportEBSVolumeRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
