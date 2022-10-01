// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ESTIMATETEMPLATECOSTRESPONSE_H
#define QTAWS_ESTIMATETEMPLATECOSTRESPONSE_H

#include "cloudformationresponse.h"
#include "estimatetemplatecostrequest.h"

namespace QtAws {
namespace CloudFormation {

class EstimateTemplateCostResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT EstimateTemplateCostResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    EstimateTemplateCostResponse(const EstimateTemplateCostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EstimateTemplateCostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EstimateTemplateCostResponse)
    Q_DISABLE_COPY(EstimateTemplateCostResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
