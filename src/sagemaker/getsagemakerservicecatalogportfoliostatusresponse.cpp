// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetSagemakerServicecatalogPortfolioStatusResponse);
    return static_cast<const GetSagemakerServicecatalogPortfolioStatusRequest *>(d->request);
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
