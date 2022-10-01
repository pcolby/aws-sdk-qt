// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopinferencerecommendationsjobresponse.h"
#include "stopinferencerecommendationsjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopInferenceRecommendationsJobResponse
 * \brief The StopInferenceRecommendationsJobResponse class provides an interace for SageMaker StopInferenceRecommendationsJob responses.
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
 * \sa SageMakerClient::stopInferenceRecommendationsJob
 */

/*!
 * Constructs a StopInferenceRecommendationsJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopInferenceRecommendationsJobResponse::StopInferenceRecommendationsJobResponse(
        const StopInferenceRecommendationsJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopInferenceRecommendationsJobResponsePrivate(this), parent)
{
    setRequest(new StopInferenceRecommendationsJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopInferenceRecommendationsJobRequest * StopInferenceRecommendationsJobResponse::request() const
{
    Q_D(const StopInferenceRecommendationsJobResponse);
    return static_cast<const StopInferenceRecommendationsJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopInferenceRecommendationsJob \a response.
 */
void StopInferenceRecommendationsJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopInferenceRecommendationsJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopInferenceRecommendationsJobResponsePrivate
 * \brief The StopInferenceRecommendationsJobResponsePrivate class provides private implementation for StopInferenceRecommendationsJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopInferenceRecommendationsJobResponsePrivate object with public implementation \a q.
 */
StopInferenceRecommendationsJobResponsePrivate::StopInferenceRecommendationsJobResponsePrivate(
    StopInferenceRecommendationsJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopInferenceRecommendationsJob response element from \a xml.
 */
void StopInferenceRecommendationsJobResponsePrivate::parseStopInferenceRecommendationsJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopInferenceRecommendationsJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
