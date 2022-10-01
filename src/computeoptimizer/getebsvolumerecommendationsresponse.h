// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSVOLUMERECOMMENDATIONSRESPONSE_H
#define QTAWS_GETEBSVOLUMERECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getebsvolumerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEBSVolumeRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEBSVolumeRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEBSVolumeRecommendationsResponse(const GetEBSVolumeRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEBSVolumeRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEBSVolumeRecommendationsResponse)
    Q_DISABLE_COPY(GetEBSVolumeRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
