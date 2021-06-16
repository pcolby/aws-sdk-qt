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
