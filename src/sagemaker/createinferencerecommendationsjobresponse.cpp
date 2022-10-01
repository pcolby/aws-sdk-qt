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

#include "createinferencerecommendationsjobresponse.h"
#include "createinferencerecommendationsjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateInferenceRecommendationsJobResponse
 * \brief The CreateInferenceRecommendationsJobResponse class provides an interace for SageMaker CreateInferenceRecommendationsJob responses.
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
 * \sa SageMakerClient::createInferenceRecommendationsJob
 */

/*!
 * Constructs a CreateInferenceRecommendationsJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInferenceRecommendationsJobResponse::CreateInferenceRecommendationsJobResponse(
        const CreateInferenceRecommendationsJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateInferenceRecommendationsJobResponsePrivate(this), parent)
{
    setRequest(new CreateInferenceRecommendationsJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInferenceRecommendationsJobRequest * CreateInferenceRecommendationsJobResponse::request() const
{
    Q_D(const CreateInferenceRecommendationsJobResponse);
    return static_cast<const CreateInferenceRecommendationsJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateInferenceRecommendationsJob \a response.
 */
void CreateInferenceRecommendationsJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInferenceRecommendationsJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateInferenceRecommendationsJobResponsePrivate
 * \brief The CreateInferenceRecommendationsJobResponsePrivate class provides private implementation for CreateInferenceRecommendationsJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateInferenceRecommendationsJobResponsePrivate object with public implementation \a q.
 */
CreateInferenceRecommendationsJobResponsePrivate::CreateInferenceRecommendationsJobResponsePrivate(
    CreateInferenceRecommendationsJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateInferenceRecommendationsJob response element from \a xml.
 */
void CreateInferenceRecommendationsJobResponsePrivate::parseCreateInferenceRecommendationsJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInferenceRecommendationsJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
