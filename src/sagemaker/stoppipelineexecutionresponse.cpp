// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoppipelineexecutionresponse.h"
#include "stoppipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopPipelineExecutionResponse
 * \brief The StopPipelineExecutionResponse class provides an interace for SageMaker StopPipelineExecution responses.
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
 * \sa SageMakerClient::stopPipelineExecution
 */

/*!
 * Constructs a StopPipelineExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StopPipelineExecutionResponse::StopPipelineExecutionResponse(
        const StopPipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopPipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new StopPipelineExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopPipelineExecutionRequest * StopPipelineExecutionResponse::request() const
{
    Q_D(const StopPipelineExecutionResponse);
    return static_cast<const StopPipelineExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopPipelineExecution \a response.
 */
void StopPipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopPipelineExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopPipelineExecutionResponsePrivate
 * \brief The StopPipelineExecutionResponsePrivate class provides private implementation for StopPipelineExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopPipelineExecutionResponsePrivate object with public implementation \a q.
 */
StopPipelineExecutionResponsePrivate::StopPipelineExecutionResponsePrivate(
    StopPipelineExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopPipelineExecution response element from \a xml.
 */
void StopPipelineExecutionResponsePrivate::parseStopPipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopPipelineExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
