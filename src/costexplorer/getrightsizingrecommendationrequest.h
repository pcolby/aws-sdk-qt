// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRIGHTSIZINGRECOMMENDATIONREQUEST_H
#define QTAWS_GETRIGHTSIZINGRECOMMENDATIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetRightsizingRecommendationRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetRightsizingRecommendationRequest : public CostExplorerRequest {

public:
    GetRightsizingRecommendationRequest(const GetRightsizingRecommendationRequest &other);
    GetRightsizingRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRightsizingRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
