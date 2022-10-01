// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSRESPONSE_H
#define QTAWS_GETSAGEMAKERSERVICECATALOGPORTFOLIOSTATUSRESPONSE_H

#include "sagemakerresponse.h"
#include "getsagemakerservicecatalogportfoliostatusrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSagemakerServicecatalogPortfolioStatusResponsePrivate;

class QTAWSSAGEMAKER_EXPORT GetSagemakerServicecatalogPortfolioStatusResponse : public SageMakerResponse {
    Q_OBJECT

public:
    GetSagemakerServicecatalogPortfolioStatusResponse(const GetSagemakerServicecatalogPortfolioStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSagemakerServicecatalogPortfolioStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSagemakerServicecatalogPortfolioStatusResponse)
    Q_DISABLE_COPY(GetSagemakerServicecatalogPortfolioStatusResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
