// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopedgepackagingjobresponse.h"
#include "stopedgepackagingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopEdgePackagingJobResponse
 * \brief The StopEdgePackagingJobResponse class provides an interace for SageMaker StopEdgePackagingJob responses.
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
 * \sa SageMakerClient::stopEdgePackagingJob
 */

/*!
 * Constructs a StopEdgePackagingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopEdgePackagingJobResponse::StopEdgePackagingJobResponse(
        const StopEdgePackagingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopEdgePackagingJobResponsePrivate(this), parent)
{
    setRequest(new StopEdgePackagingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEdgePackagingJobRequest * StopEdgePackagingJobResponse::request() const
{
    Q_D(const StopEdgePackagingJobResponse);
    return static_cast<const StopEdgePackagingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopEdgePackagingJob \a response.
 */
void StopEdgePackagingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEdgePackagingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopEdgePackagingJobResponsePrivate
 * \brief The StopEdgePackagingJobResponsePrivate class provides private implementation for StopEdgePackagingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopEdgePackagingJobResponsePrivate object with public implementation \a q.
 */
StopEdgePackagingJobResponsePrivate::StopEdgePackagingJobResponsePrivate(
    StopEdgePackagingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopEdgePackagingJob response element from \a xml.
 */
void StopEdgePackagingJobResponsePrivate::parseStopEdgePackagingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEdgePackagingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
