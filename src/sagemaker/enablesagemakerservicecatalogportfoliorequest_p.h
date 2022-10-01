// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_P_H
#define QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "enablesagemakerservicecatalogportfoliorequest.h"

namespace QtAws {
namespace SageMaker {

class EnableSagemakerServicecatalogPortfolioRequest;

class EnableSagemakerServicecatalogPortfolioRequestPrivate : public SageMakerRequestPrivate {

public:
    EnableSagemakerServicecatalogPortfolioRequestPrivate(const SageMakerRequest::Action action,
                                   EnableSagemakerServicecatalogPortfolioRequest * const q);
    EnableSagemakerServicecatalogPortfolioRequestPrivate(const EnableSagemakerServicecatalogPortfolioRequestPrivate &other,
                                   EnableSagemakerServicecatalogPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSagemakerServicecatalogPortfolioRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
