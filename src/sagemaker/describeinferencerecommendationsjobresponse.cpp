// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinferencerecommendationsjobresponse.h"
#include "describeinferencerecommendationsjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeInferenceRecommendationsJobResponse
 * \brief The DescribeInferenceRecommendationsJobResponse class provides an interace for SageMaker DescribeInferenceRecommendationsJob responses.
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
 * \sa SageMakerClient::describeInferenceRecommendationsJob
 */

/*!
 * Constructs a DescribeInferenceRecommendationsJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInferenceRecommendationsJobResponse::DescribeInferenceRecommendationsJobResponse(
        const DescribeInferenceRecommendationsJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeInferenceRecommendationsJobResponsePrivate(this), parent)
{
    setRequest(new DescribeInferenceRecommendationsJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInferenceRecommendationsJobRequest * DescribeInferenceRecommendationsJobResponse::request() const
{
    Q_D(const DescribeInferenceRecommendationsJobResponse);
    return static_cast<const DescribeInferenceRecommendationsJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeInferenceRecommendationsJob \a response.
 */
void DescribeInferenceRecommendationsJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInferenceRecommendationsJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeInferenceRecommendationsJobResponsePrivate
 * \brief The DescribeInferenceRecommendationsJobResponsePrivate class provides private implementation for DescribeInferenceRecommendationsJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeInferenceRecommendationsJobResponsePrivate object with public implementation \a q.
 */
DescribeInferenceRecommendationsJobResponsePrivate::DescribeInferenceRecommendationsJobResponsePrivate(
    DescribeInferenceRecommendationsJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeInferenceRecommendationsJob response element from \a xml.
 */
void DescribeInferenceRecommendationsJobResponsePrivate::parseDescribeInferenceRecommendationsJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInferenceRecommendationsJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
