// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_H
#define QTAWS_ENABLESAGEMAKERSERVICECATALOGPORTFOLIOREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class EnableSagemakerServicecatalogPortfolioRequestPrivate;

class QTAWSSAGEMAKER_EXPORT EnableSagemakerServicecatalogPortfolioRequest : public SageMakerRequest {

public:
    EnableSagemakerServicecatalogPortfolioRequest(const EnableSagemakerServicecatalogPortfolioRequest &other);
    EnableSagemakerServicecatalogPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSagemakerServicecatalogPortfolioRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
