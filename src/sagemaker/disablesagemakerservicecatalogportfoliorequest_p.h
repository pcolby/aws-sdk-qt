// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_P_H
#define QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "disablesagemakerservicecatalogportfoliorequest.h"

namespace QtAws {
namespace SageMaker {

class DisableSagemakerServicecatalogPortfolioRequest;

class DisableSagemakerServicecatalogPortfolioRequestPrivate : public SageMakerRequestPrivate {

public:
    DisableSagemakerServicecatalogPortfolioRequestPrivate(const SageMakerRequest::Action action,
                                   DisableSagemakerServicecatalogPortfolioRequest * const q);
    DisableSagemakerServicecatalogPortfolioRequestPrivate(const DisableSagemakerServicecatalogPortfolioRequestPrivate &other,
                                   DisableSagemakerServicecatalogPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableSagemakerServicecatalogPortfolioRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
