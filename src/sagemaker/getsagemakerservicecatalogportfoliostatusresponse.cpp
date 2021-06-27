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

#include "getsagemakerservicecatalogportfoliostatusresponse.h"
#include "getsagemakerservicecatalogportfoliostatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetSagemakerServicecatalogPortfolioStatusResponse
 * \brief The GetSagemakerServicecatalogPortfolioStatusResponse class provides an interace for SageMaker GetSagemakerServicecatalogPortfolioStatus responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::getSagemakerServicecatalogPortfolioStatus
 */

/*!
 * Constructs a GetSagemakerServicecatalogPortfolioStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetSagemakerServicecatalogPortfolioStatusResponse::GetSagemakerServicecatalogPortfolioStatusResponse(
        const GetSagemakerServicecatalogPortfolioStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new GetSagemakerServicecatalogPortfolioStatusResponsePrivate(this), parent)
{
    setRequest(new GetSagemakerServicecatalogPortfolioStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSagemakerServicecatalogPortfolioStatusRequest * GetSagemakerServicecatalogPortfolioStatusResponse::request() const
{
    return static_cast<const GetSagemakerServicecatalogPortfolioStatusRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker GetSagemakerServicecatalogPortfolioStatus \a response.
 */
void GetSagemakerServicecatalogPortfolioStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSagemakerServicecatalogPortfolioStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::GetSagemakerServicecatalogPortfolioStatusResponsePrivate
 * \brief The GetSagemakerServicecatalogPortfolioStatusResponsePrivate class provides private implementation for GetSagemakerServicecatalogPortfolioStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetSagemakerServicecatalogPortfolioStatusResponsePrivate object with public implementation \a q.
 */
GetSagemakerServicecatalogPortfolioStatusResponsePrivate::GetSagemakerServicecatalogPortfolioStatusResponsePrivate(
    GetSagemakerServicecatalogPortfolioStatusResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker GetSagemakerServicecatalogPortfolioStatus response element from \a xml.
 */
void GetSagemakerServicecatalogPortfolioStatusResponsePrivate::parseGetSagemakerServicecatalogPortfolioStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSagemakerServicecatalogPortfolioStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
