// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTESTIMATIONRESPONSE_P_H
#define QTAWS_GETCOSTESTIMATIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class GetCostEstimationResponse;

class GetCostEstimationResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit GetCostEstimationResponsePrivate(GetCostEstimationResponse * const q);

    void parseGetCostEstimationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCostEstimationResponse)
    Q_DISABLE_COPY(GetCostEstimationResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
