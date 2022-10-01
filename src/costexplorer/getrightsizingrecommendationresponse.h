// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRIGHTSIZINGRECOMMENDATIONRESPONSE_H
#define QTAWS_GETRIGHTSIZINGRECOMMENDATIONRESPONSE_H

#include "costexplorerresponse.h"
#include "getrightsizingrecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetRightsizingRecommendationResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetRightsizingRecommendationResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetRightsizingRecommendationResponse(const GetRightsizingRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRightsizingRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRightsizingRecommendationResponse)
    Q_DISABLE_COPY(GetRightsizingRecommendationResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
