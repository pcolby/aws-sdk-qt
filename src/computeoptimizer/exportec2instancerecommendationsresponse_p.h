// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSRESPONSE_P_H
#define QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEC2InstanceRecommendationsResponse;

class ExportEC2InstanceRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit ExportEC2InstanceRecommendationsResponsePrivate(ExportEC2InstanceRecommendationsResponse * const q);

    void parseExportEC2InstanceRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportEC2InstanceRecommendationsResponse)
    Q_DISABLE_COPY(ExportEC2InstanceRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
