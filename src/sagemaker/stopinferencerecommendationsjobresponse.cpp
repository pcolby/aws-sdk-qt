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
