/*
    Copyright 2013-2018 Paul Colby

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

#include "deletejobqueueresponse.h"
#include "deletejobqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DeleteJobQueueResponse
 * \brief The DeleteJobQueueResponse class provides an interace for Batch DeleteJobQueue responses.
 *
 * \inmodule QtAwsBatch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::deleteJobQueue
 */

/*!
 * Constructs a DeleteJobQueueResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobQueueResponse::DeleteJobQueueResponse(
        const DeleteJobQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DeleteJobQueueResponsePrivate(this), parent)
{
    setRequest(new DeleteJobQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobQueueRequest * DeleteJobQueueResponse::request() const
{
    Q_D(const DeleteJobQueueResponse);
    return static_cast<const DeleteJobQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DeleteJobQueue \a response.
 */
void DeleteJobQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DeleteJobQueueResponsePrivate
 * \brief The DeleteJobQueueResponsePrivate class provides private implementation for DeleteJobQueueResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DeleteJobQueueResponsePrivate object with public implementation \a q.
 */
DeleteJobQueueResponsePrivate::DeleteJobQueueResponsePrivate(
    DeleteJobQueueResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DeleteJobQueue response element from \a xml.
 */
void DeleteJobQueueResponsePrivate::parseDeleteJobQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
