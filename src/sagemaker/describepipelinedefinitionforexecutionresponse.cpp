// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
