// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ESTIMATETEMPLATECOSTREQUEST_P_H
#define QTAWS_ESTIMATETEMPLATECOSTREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "estimatetemplatecostrequest.h"

namespace QtAws {
namespace CloudFormation {

class EstimateTemplateCostRequest;

class EstimateTemplateCostRequestPrivate : public CloudFormationRequestPrivate {

public:
    EstimateTemplateCostRequestPrivate(const CloudFormationRequest::Action action,
                                   EstimateTemplateCostRequest * const q);
    EstimateTemplateCostRequestPrivate(const EstimateTemplateCostRequestPrivate &other,
                                   EstimateTemplateCostRequest * const q);

private:
    Q_DECLARE_PUBLIC(EstimateTemplateCostRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
