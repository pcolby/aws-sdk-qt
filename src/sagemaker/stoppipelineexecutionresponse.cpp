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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
