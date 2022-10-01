// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopprocessingjobresponse.h"
#include "stopprocessingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopProcessingJobResponse
 * \brief The StopProcessingJobResponse class provides an interace for SageMaker StopProcessingJob responses.
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
 * \sa SageMakerClient::stopProcessingJob
 */

/*!
 * Constructs a StopProcessingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopProcessingJobResponse::StopProcessingJobResponse(
        const StopProcessingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopProcessingJobResponsePrivate(this), parent)
{
    setRequest(new StopProcessingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopProcessingJobRequest * StopProcessingJobResponse::request() const
{
    Q_D(const StopProcessingJobResponse);
    return static_cast<const StopProcessingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopProcessingJob \a response.
 */
void StopProcessingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopProcessingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopProcessingJobResponsePrivate
 * \brief The StopProcessingJobResponsePrivate class provides private implementation for StopProcessingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopProcessingJobResponsePrivate object with public implementation \a q.
 */
StopProcessingJobResponsePrivate::StopProcessingJobResponsePrivate(
    StopProcessingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopProcessingJob response element from \a xml.
 */
void StopProcessingJobResponsePrivate::parseStopProcessingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopProcessingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
