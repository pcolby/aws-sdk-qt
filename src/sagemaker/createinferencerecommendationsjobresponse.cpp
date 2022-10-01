// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
