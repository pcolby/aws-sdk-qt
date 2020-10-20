/*
    Copyright 2013-2020 Paul Colby

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

#include "getpipelinedefinitionresponse.h"
#include "getpipelinedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::GetPipelineDefinitionResponse
 * \brief The GetPipelineDefinitionResponse class provides an interace for DataPipeline GetPipelineDefinition responses.
 *
 * \inmodule QtAwsDataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::getPipelineDefinition
 */

/*!
 * Constructs a GetPipelineDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPipelineDefinitionResponse::GetPipelineDefinitionResponse(
        const GetPipelineDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new GetPipelineDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetPipelineDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPipelineDefinitionRequest * GetPipelineDefinitionResponse::request() const
{
    Q_D(const GetPipelineDefinitionResponse);
    return static_cast<const GetPipelineDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataPipeline GetPipelineDefinition \a response.
 */
void GetPipelineDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPipelineDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataPipeline::GetPipelineDefinitionResponsePrivate
 * \brief The GetPipelineDefinitionResponsePrivate class provides private implementation for GetPipelineDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a GetPipelineDefinitionResponsePrivate object with public implementation \a q.
 */
GetPipelineDefinitionResponsePrivate::GetPipelineDefinitionResponsePrivate(
    GetPipelineDefinitionResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * Parses a DataPipeline GetPipelineDefinition response element from \a xml.
 */
void GetPipelineDefinitionResponsePrivate::parseGetPipelineDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPipelineDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataPipeline
} // namespace QtAws
