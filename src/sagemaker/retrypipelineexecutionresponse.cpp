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

#include "retrypipelineexecutionresponse.h"
#include "retrypipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RetryPipelineExecutionResponse
 * \brief The RetryPipelineExecutionResponse class provides an interace for SageMaker RetryPipelineExecution responses.
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
 * \sa SageMakerClient::retryPipelineExecution
 */

/*!
 * Constructs a RetryPipelineExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
RetryPipelineExecutionResponse::RetryPipelineExecutionResponse(
        const RetryPipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new RetryPipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new RetryPipelineExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetryPipelineExecutionRequest * RetryPipelineExecutionResponse::request() const
{
    Q_D(const RetryPipelineExecutionResponse);
    return static_cast<const RetryPipelineExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker RetryPipelineExecution \a response.
 */
void RetryPipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetryPipelineExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::RetryPipelineExecutionResponsePrivate
 * \brief The RetryPipelineExecutionResponsePrivate class provides private implementation for RetryPipelineExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RetryPipelineExecutionResponsePrivate object with public implementation \a q.
 */
RetryPipelineExecutionResponsePrivate::RetryPipelineExecutionResponsePrivate(
    RetryPipelineExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker RetryPipelineExecution response element from \a xml.
 */
void RetryPipelineExecutionResponsePrivate::parseRetryPipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryPipelineExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
