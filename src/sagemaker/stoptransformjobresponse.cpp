// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptransformjobresponse.h"
#include "stoptransformjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTransformJobResponse
 * \brief The StopTransformJobResponse class provides an interace for SageMaker StopTransformJob responses.
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
 * \sa SageMakerClient::stopTransformJob
 */

/*!
 * Constructs a StopTransformJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTransformJobResponse::StopTransformJobResponse(
        const StopTransformJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopTransformJobResponsePrivate(this), parent)
{
    setRequest(new StopTransformJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTransformJobRequest * StopTransformJobResponse::request() const
{
    Q_D(const StopTransformJobResponse);
    return static_cast<const StopTransformJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopTransformJob \a response.
 */
void StopTransformJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTransformJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopTransformJobResponsePrivate
 * \brief The StopTransformJobResponsePrivate class provides private implementation for StopTransformJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTransformJobResponsePrivate object with public implementation \a q.
 */
StopTransformJobResponsePrivate::StopTransformJobResponsePrivate(
    StopTransformJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopTransformJob response element from \a xml.
 */
void StopTransformJobResponsePrivate::parseStopTransformJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTransformJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
