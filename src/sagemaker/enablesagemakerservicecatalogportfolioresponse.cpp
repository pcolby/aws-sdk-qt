/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
