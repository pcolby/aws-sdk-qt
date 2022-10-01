// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOSTESTIMATIONRESPONSE_P_H
#define QTAWS_STARTCOSTESTIMATIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class StartCostEstimationResponse;

class StartCostEstimationResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit StartCostEstimationResponsePrivate(StartCostEstimationResponse * const q);

    void parseStartCostEstimationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCostEstimationResponse)
    Q_DISABLE_COPY(StartCostEstimationResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
