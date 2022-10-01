// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSRESPONSE_P_H
#define QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class GetSagemakerServicecatalogPortfolioStatusResponse;

class GetSagemakerServicecatalogPortfolioStatusResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit GetSagemakerServicecatalogPortfolioStatusResponsePrivate(GetSagemakerServicecatalogPortfolioStatusResponse * const q);

    void parseGetSagemakerServicecatalogPortfolioStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSagemakerServicecatalogPortfolioStatusResponse)
    Q_DISABLE_COPY(GetSagemakerServicecatalogPortfolioStatusResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
