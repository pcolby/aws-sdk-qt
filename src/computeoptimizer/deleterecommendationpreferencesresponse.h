// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONPREFERENCESRESPONSE_H
#define QTAWS_DELETERECOMMENDATIONPREFERENCESRESPONSE_H

#include "computeoptimizerresponse.h"
#include "deleterecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DeleteRecommendationPreferencesResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT DeleteRecommendationPreferencesResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    DeleteRecommendationPreferencesResponse(const DeleteRecommendationPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecommendationPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommendationPreferencesResponse)
    Q_DISABLE_COPY(DeleteRecommendationPreferencesResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
