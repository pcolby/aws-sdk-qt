// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablesagemakerservicecatalogportfolioresponse.h"
#include "disablesagemakerservicecatalogportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DisableSagemakerServicecatalogPortfolioResponse
 * \brief The DisableSagemakerServicecatalogPortfolioResponse class provides an interace for SageMaker DisableSagemakerServicecatalogPortfolio responses.
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
 * \sa SageMakerClient::disableSagemakerServicecatalogPortfolio
 */

/*!
 * Constructs a DisableSagemakerServicecatalogPortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
DisableSagemakerServicecatalogPortfolioResponse::DisableSagemakerServicecatalogPortfolioResponse(
        const DisableSagemakerServicecatalogPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DisableSagemakerServicecatalogPortfolioResponsePrivate(this), parent)
{
    setRequest(new DisableSagemakerServicecatalogPortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableSagemakerServicecatalogPortfolioRequest * DisableSagemakerServicecatalogPortfolioResponse::request() const
{
    Q_D(const DisableSagemakerServicecatalogPortfolioResponse);
    return static_cast<const DisableSagemakerServicecatalogPortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DisableSagemakerServicecatalogPortfolio \a response.
 */
void DisableSagemakerServicecatalogPortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableSagemakerServicecatalogPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DisableSagemakerServicecatalogPortfolioResponsePrivate
 * \brief The DisableSagemakerServicecatalogPortfolioResponsePrivate class provides private implementation for DisableSagemakerServicecatalogPortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DisableSagemakerServicecatalogPortfolioResponsePrivate object with public implementation \a q.
 */
DisableSagemakerServicecatalogPortfolioResponsePrivate::DisableSagemakerServicecatalogPortfolioResponsePrivate(
    DisableSagemakerServicecatalogPortfolioResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DisableSagemakerServicecatalogPortfolio response element from \a xml.
 */
void DisableSagemakerServicecatalogPortfolioResponsePrivate::parseDisableSagemakerServicecatalogPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableSagemakerServicecatalogPortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
