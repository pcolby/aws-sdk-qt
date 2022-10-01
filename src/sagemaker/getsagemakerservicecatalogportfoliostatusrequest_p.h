// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSREQUEST_P_H
#define QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "getsagemakerservicecatalogportfoliostatusrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSagemakerServicecatalogPortfolioStatusRequest;

class GetSagemakerServicecatalogPortfolioStatusRequestPrivate : public SageMakerRequestPrivate {

public:
    GetSagemakerServicecatalogPortfolioStatusRequestPrivate(const SageMakerRequest::Action action,
                                   GetSagemakerServicecatalogPortfolioStatusRequest * const q);
    GetSagemakerServicecatalogPortfolioStatusRequestPrivate(const GetSagemakerServicecatalogPortfolioStatusRequestPrivate &other,
                                   GetSagemakerServicecatalogPortfolioStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSagemakerServicecatalogPortfolioStatusRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
