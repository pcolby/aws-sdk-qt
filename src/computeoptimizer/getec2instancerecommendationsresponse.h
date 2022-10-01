// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2INSTANCERECOMMENDATIONSRESPONSE_H
#define QTAWS_GETEC2INSTANCERECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2InstanceRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEC2InstanceRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEC2InstanceRecommendationsResponse(const GetEC2InstanceRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEC2InstanceRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEC2InstanceRecommendationsResponse)
    Q_DISABLE_COPY(GetEC2InstanceRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
