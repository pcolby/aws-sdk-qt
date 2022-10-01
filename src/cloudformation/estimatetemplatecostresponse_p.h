// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ESTIMATETEMPLATECOSTRESPONSE_P_H
#define QTAWS_ESTIMATETEMPLATECOSTRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class EstimateTemplateCostResponse;

class EstimateTemplateCostResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit EstimateTemplateCostResponsePrivate(EstimateTemplateCostResponse * const q);

    void parseEstimateTemplateCostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EstimateTemplateCostResponse)
    Q_DISABLE_COPY(EstimateTemplateCostResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
