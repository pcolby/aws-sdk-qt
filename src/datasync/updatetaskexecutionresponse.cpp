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

#include "updatetaskexecutionresponse.h"
#include "updatetaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionResponse
 * \brief The UpdateTaskExecutionResponse class provides an interace for DataSync UpdateTaskExecution responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::updateTaskExecution
 */

/*!
 * Constructs a UpdateTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTaskExecutionResponse::UpdateTaskExecutionResponse(
        const UpdateTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new UpdateTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTaskExecutionRequest * UpdateTaskExecutionResponse::request() const
{
    Q_D(const UpdateTaskExecutionResponse);
    return static_cast<const UpdateTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateTaskExecution \a response.
 */
void UpdateTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionResponsePrivate
 * \brief The UpdateTaskExecutionResponsePrivate class provides private implementation for UpdateTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateTaskExecutionResponsePrivate object with public implementation \a q.
 */
UpdateTaskExecutionResponsePrivate::UpdateTaskExecutionResponsePrivate(
    UpdateTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateTaskExecution response element from \a xml.
 */
void UpdateTaskExecutionResponsePrivate::parseUpdateTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
