// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeobjectsresponse.h"
#include "describeobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DescribeObjectsResponse
 * \brief The DescribeObjectsResponse class provides an interace for DataPipeline DescribeObjects responses.
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
 * \sa DataPipelineClient::describeObjects
 */

/*!
 * Constructs a DescribeObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeObjectsResponse::DescribeObjectsResponse(
        const DescribeObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DescribeObjectsResponsePrivate(this), parent)
{
    setRequest(new DescribeObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeObjectsRequest * DescribeObjectsResponse::request() const
{
    Q_D(const DescribeObjectsResponse);
    return static_cast<const DescribeObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataPipeline DescribeObjects \a response.
 */
void DescribeObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataPipeline::DescribeObjectsResponsePrivate
 * \brief The DescribeObjectsResponsePrivate class provides private implementation for DescribeObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DescribeObjectsResponsePrivate object with public implementation \a q.
 */
DescribeObjectsResponsePrivate::DescribeObjectsResponsePrivate(
    DescribeObjectsResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * Parses a DataPipeline DescribeObjects response element from \a xml.
 */
void DescribeObjectsResponsePrivate::parseDescribeObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataPipeline
} // namespace QtAws
