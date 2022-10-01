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

#include "describepipelinedefinitionforexecutionresponse.h"
#include "describepipelinedefinitionforexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribePipelineDefinitionForExecutionResponse
 * \brief The DescribePipelineDefinitionForExecutionResponse class provides an interace for SageMaker DescribePipelineDefinitionForExecution responses.
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
 * \sa SageMakerClient::describePipelineDefinitionForExecution
 */

/*!
 * Constructs a DescribePipelineDefinitionForExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePipelineDefinitionForExecutionResponse::DescribePipelineDefinitionForExecutionResponse(
        const DescribePipelineDefinitionForExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribePipelineDefinitionForExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribePipelineDefinitionForExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePipelineDefinitionForExecutionRequest * DescribePipelineDefinitionForExecutionResponse::request() const
{
    Q_D(const DescribePipelineDefinitionForExecutionResponse);
    return static_cast<const DescribePipelineDefinitionForExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribePipelineDefinitionForExecution \a response.
 */
void DescribePipelineDefinitionForExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePipelineDefinitionForExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribePipelineDefinitionForExecutionResponsePrivate
 * \brief The DescribePipelineDefinitionForExecutionResponsePrivate class provides private implementation for DescribePipelineDefinitionForExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribePipelineDefinitionForExecutionResponsePrivate object with public implementation \a q.
 */
DescribePipelineDefinitionForExecutionResponsePrivate::DescribePipelineDefinitionForExecutionResponsePrivate(
    DescribePipelineDefinitionForExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribePipelineDefinitionForExecution response element from \a xml.
 */
void DescribePipelineDefinitionForExecutionResponsePrivate::parseDescribePipelineDefinitionForExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePipelineDefinitionForExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
