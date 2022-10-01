// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_P_H
#define QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DisableSagemakerServicecatalogPortfolioResponse;

class DisableSagemakerServicecatalogPortfolioResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DisableSagemakerServicecatalogPortfolioResponsePrivate(DisableSagemakerServicecatalogPortfolioResponse * const q);

    void parseDisableSagemakerServicecatalogPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableSagemakerServicecatalogPortfolioResponse)
    Q_DISABLE_COPY(DisableSagemakerServicecatalogPortfolioResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
