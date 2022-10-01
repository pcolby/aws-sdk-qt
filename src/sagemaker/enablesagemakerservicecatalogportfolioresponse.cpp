// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablesagemakerservicecatalogportfolioresponse.h"
#include "enablesagemakerservicecatalogportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::EnableSagemakerServicecatalogPortfolioResponse
 * \brief The EnableSagemakerServicecatalogPortfolioResponse class provides an interace for SageMaker EnableSagemakerServicecatalogPortfolio responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::enableSagemakerServicecatalogPortfolio
 */

/*!
 * Constructs a EnableSagemakerServicecatalogPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
EnableSagemakerServicecatalogPortfolioResponse::EnableSagemakerServicecatalogPortfolioResponse(
        const EnableSagemakerServicecatalogPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new EnableSagemakerServicecatalogPortfolioResponsePrivate(this), parent)
{
    setRequest(new EnableSagemakerServicecatalogPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableSagemakerServicecatalogPortfolioRequest * EnableSagemakerServicecatalogPortfolioResponse::request() const
{
    Q_D(const EnableSagemakerServicecatalogPortfolioResponse);
    return static_cast<const EnableSagemakerServicecatalogPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker EnableSagemakerServicecatalogPortfolio \a response.
 */
void EnableSagemakerServicecatalogPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableSagemakerServicecatalogPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::EnableSagemakerServicecatalogPortfolioResponsePrivate
 * \brief The EnableSagemakerServicecatalogPortfolioResponsePrivate class provides private implementation for EnableSagemakerServicecatalogPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a EnableSagemakerServicecatalogPortfolioResponsePrivate object with public implementation \a q.
 */
EnableSagemakerServicecatalogPortfolioResponsePrivate::EnableSagemakerServicecatalogPortfolioResponsePrivate(
    EnableSagemakerServicecatalogPortfolioResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker EnableSagemakerServicecatalogPortfolio response element from \a xml.
 */
void EnableSagemakerServicecatalogPortfolioResponsePrivate::parseEnableSagemakerServicecatalogPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSagemakerServicecatalogPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
