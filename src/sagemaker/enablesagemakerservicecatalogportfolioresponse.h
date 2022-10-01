// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_H
#define QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIORESPONSE_H

#include "sagemakerresponse.h"
#include "enablesagemakerservicecatalogportfoliorequest.h"

namespace QtAws {
namespace SageMaker {

class EnableSagemakerServicecatalogPortfolioResponsePrivate;

class QTAWSSAGEMAKER_EXPORT EnableSagemakerServicecatalogPortfolioResponse : public SageMakerResponse {
    Q_OBJECT

public:
    EnableSagemakerServicecatalogPortfolioResponse(const EnableSagemakerServicecatalogPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSagemakerServicecatalogPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSagemakerServicecatalogPortfolioResponse)
    Q_DISABLE_COPY(EnableSagemakerServicecatalogPortfolioResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
