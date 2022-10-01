// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSREQUEST_H
#define QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSagemakerServicecatalogPortfolioStatusRequestPrivate;

class QTAWSSAGEMAKER_EXPORT GetSagemakerServicecatalogPortfolioStatusRequest : public SageMakerRequest {

public:
    GetSagemakerServicecatalogPortfolioStatusRequest(const GetSagemakerServicecatalogPortfolioStatusRequest &other);
    GetSagemakerServicecatalogPortfolioStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSagemakerServicecatalogPortfolioStatusRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
