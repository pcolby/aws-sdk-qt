// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSRESPONSE_H
#define QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "exportebsvolumerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEBSVolumeRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportEBSVolumeRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    ExportEBSVolumeRecommendationsResponse(const ExportEBSVolumeRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportEBSVolumeRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportEBSVolumeRecommendationsResponse)
    Q_DISABLE_COPY(ExportEBSVolumeRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
