// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoplabelingjobresponse.h"
#include "stoplabelingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopLabelingJobResponse
 * \brief The StopLabelingJobResponse class provides an interace for SageMaker StopLabelingJob responses.
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
 * \sa SageMakerClient::stopLabelingJob
 */

/*!
 * Constructs a StopLabelingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopLabelingJobResponse::StopLabelingJobResponse(
        const StopLabelingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopLabelingJobResponsePrivate(this), parent)
{
    setRequest(new StopLabelingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopLabelingJobRequest * StopLabelingJobResponse::request() const
{
    Q_D(const StopLabelingJobResponse);
    return static_cast<const StopLabelingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopLabelingJob \a response.
 */
void StopLabelingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopLabelingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopLabelingJobResponsePrivate
 * \brief The StopLabelingJobResponsePrivate class provides private implementation for StopLabelingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopLabelingJobResponsePrivate object with public implementation \a q.
 */
StopLabelingJobResponsePrivate::StopLabelingJobResponsePrivate(
    StopLabelingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopLabelingJob response element from \a xml.
 */
void StopLabelingJobResponsePrivate::parseStopLabelingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopLabelingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
