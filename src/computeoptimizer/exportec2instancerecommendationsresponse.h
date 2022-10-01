// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSRESPONSE_H
#define QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "exportec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEC2InstanceRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportEC2InstanceRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    ExportEC2InstanceRecommendationsResponse(const ExportEC2InstanceRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportEC2InstanceRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportEC2InstanceRecommendationsResponse)
    Q_DISABLE_COPY(ExportEC2InstanceRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
