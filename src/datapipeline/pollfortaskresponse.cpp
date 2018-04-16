/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pollfortaskresponse.h"
#include "pollfortaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::PollForTaskResponse
 *
 * \brief The PollForTaskResponse class provides an interace for DataPipeline PollForTask responses.
 *
 * \ingroup DataPipeline
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
 * \sa DataPipelineClient::pollForTask
 */

/*!
 * @brief  Constructs a new PollForTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForTaskResponse::PollForTaskResponse(
        const PollForTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new PollForTaskResponsePrivate(this), parent)
{
    setRequest(new PollForTaskRequest(request));
    setReply(reply);
}

const PollForTaskRequest * PollForTaskResponse::request() const
{
    Q_D(const PollForTaskResponse);
    return static_cast<const PollForTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a DataPipeline PollForTask response.
 *
 * @param  response  Response to parse.
 */
void PollForTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(PollForTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PollForTaskResponsePrivate
 *
 * \brief Private implementation for PollForTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PollForTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForTaskResponse instance.
 */
PollForTaskResponsePrivate::PollForTaskResponsePrivate(
    PollForTaskResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DataPipeline PollForTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForTaskResponsePrivate::parsePollForTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForTaskResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
