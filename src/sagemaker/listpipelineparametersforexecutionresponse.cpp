// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelineparametersforexecutionresponse.h"
#include "listpipelineparametersforexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelineParametersForExecutionResponse
 * \brief The ListPipelineParametersForExecutionResponse class provides an interace for SageMaker ListPipelineParametersForExecution responses.
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
 * \sa SageMakerClient::listPipelineParametersForExecution
 */

/*!
 * Constructs a ListPipelineParametersForExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
ListPipelineParametersForExecutionResponse::ListPipelineParametersForExecutionResponse(
        const ListPipelineParametersForExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListPipelineParametersForExecutionResponsePrivate(this), parent)
{
    setRequest(new ListPipelineParametersForExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPipelineParametersForExecutionRequest * ListPipelineParametersForExecutionResponse::request() const
{
    Q_D(const ListPipelineParametersForExecutionResponse);
    return static_cast<const ListPipelineParametersForExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListPipelineParametersForExecution \a response.
 */
void ListPipelineParametersForExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPipelineParametersForExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListPipelineParametersForExecutionResponsePrivate
 * \brief The ListPipelineParametersForExecutionResponsePrivate class provides private implementation for ListPipelineParametersForExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelineParametersForExecutionResponsePrivate object with public implementation \a q.
 */
ListPipelineParametersForExecutionResponsePrivate::ListPipelineParametersForExecutionResponsePrivate(
    ListPipelineParametersForExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListPipelineParametersForExecution response element from \a xml.
 */
void ListPipelineParametersForExecutionResponsePrivate::parseListPipelineParametersForExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelineParametersForExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
