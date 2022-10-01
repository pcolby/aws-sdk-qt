// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONPREFERENCESRESPONSE_H
#define QTAWS_PUTRECOMMENDATIONPREFERENCESRESPONSE_H

#include "computeoptimizerresponse.h"
#include "putrecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class PutRecommendationPreferencesResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT PutRecommendationPreferencesResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    PutRecommendationPreferencesResponse(const PutRecommendationPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRecommendationPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecommendationPreferencesResponse)
    Q_DISABLE_COPY(PutRecommendationPreferencesResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
