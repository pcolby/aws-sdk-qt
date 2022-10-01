// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_P_H
#define QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class EnableSagemakerServicecatalogPortfolioResponse;

class EnableSagemakerServicecatalogPortfolioResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit EnableSagemakerServicecatalogPortfolioResponsePrivate(EnableSagemakerServicecatalogPortfolioResponse * const q);

    void parseEnableSagemakerServicecatalogPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSagemakerServicecatalogPortfolioResponse)
    Q_DISABLE_COPY(EnableSagemakerServicecatalogPortfolioResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
