// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startpipelineexecutionresponse.h"
#include "startpipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartPipelineExecutionResponse
 * \brief The StartPipelineExecutionResponse class provides an interace for SageMaker StartPipelineExecution responses.
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
 * \sa SageMakerClient::startPipelineExecution
 */

/*!
 * Constructs a StartPipelineExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartPipelineExecutionResponse::StartPipelineExecutionResponse(
        const StartPipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartPipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new StartPipelineExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPipelineExecutionRequest * StartPipelineExecutionResponse::request() const
{
    Q_D(const StartPipelineExecutionResponse);
    return static_cast<const StartPipelineExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StartPipelineExecution \a response.
 */
void StartPipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPipelineExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StartPipelineExecutionResponsePrivate
 * \brief The StartPipelineExecutionResponsePrivate class provides private implementation for StartPipelineExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartPipelineExecutionResponsePrivate object with public implementation \a q.
 */
StartPipelineExecutionResponsePrivate::StartPipelineExecutionResponsePrivate(
    StartPipelineExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StartPipelineExecution response element from \a xml.
 */
void StartPipelineExecutionResponsePrivate::parseStartPipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPipelineExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
