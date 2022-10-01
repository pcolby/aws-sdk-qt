// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_H
#define QTAWS_DISABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_H

#include "sagemakerresponse.h"
#include "disablesagemakerservicecatalogportfoliorequest.h"

namespace QtAws {
namespace SageMaker {

class DisableSagemakerServicecatalogPortfolioResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DisableSagemakerServicecatalogPortfolioResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DisableSagemakerServicecatalogPortfolioResponse(const DisableSagemakerServicecatalogPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableSagemakerServicecatalogPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSagemakerServicecatalogPortfolioResponse)
    Q_DISABLE_COPY(DisableSagemakerServicecatalogPortfolioResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
