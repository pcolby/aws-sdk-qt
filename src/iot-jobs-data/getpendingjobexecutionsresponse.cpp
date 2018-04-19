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

#include "getpendingjobexecutionsresponse.h"
#include "getpendingjobexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::GetPendingJobExecutionsResponse
 * \brief The GetPendingJobExecutionsResponse class provides an interace for IoTJobsDataPlane GetPendingJobExecutions responses.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 *
 *  AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 *  one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 *  and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 * 
 *  operations>
 * 
 *  To create a job, you make a job document which is a description of the remote operations to be performed, and you
 *  specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 * 
 *  both>
 * 
 *  AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 *  by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 *  service provides commands to track the progress of a job on a specific target and for all the targets of the
 *
 * \sa IoTJobsDataPlaneClient::getPendingJobExecutions
 */

/*!
 * Constructs a GetPendingJobExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetPendingJobExecutionsResponse::GetPendingJobExecutionsResponse(
        const GetPendingJobExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new GetPendingJobExecutionsResponsePrivate(this), parent)
{
    setRequest(new GetPendingJobExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPendingJobExecutionsRequest * GetPendingJobExecutionsResponse::request() const
{
    Q_D(const GetPendingJobExecutionsResponse);
    return static_cast<const GetPendingJobExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTJobsDataPlane GetPendingJobExecutions \a response.
 */
void GetPendingJobExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPendingJobExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTJobsDataPlane::GetPendingJobExecutionsResponsePrivate
 * \brief The GetPendingJobExecutionsResponsePrivate class provides private implementation for GetPendingJobExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a GetPendingJobExecutionsResponsePrivate object with public implementation \a q.
 */
GetPendingJobExecutionsResponsePrivate::GetPendingJobExecutionsResponsePrivate(
    GetPendingJobExecutionsResponse * const q) : IoTJobsDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTJobsDataPlane GetPendingJobExecutions response element from \a xml.
 */
void GetPendingJobExecutionsResponsePrivate::parseGetPendingJobExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPendingJobExecutionsResponse"));
    /// @todo
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
