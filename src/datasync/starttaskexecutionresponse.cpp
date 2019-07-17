/*
    Copyright 2013-2019 Paul Colby

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

#include "starttaskexecutionresponse.h"
#include "starttaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::StartTaskExecutionResponse
 * \brief The StartTaskExecutionResponse class provides an interace for DataSync StartTaskExecution responses.
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
 * \sa DataSyncClient::startTaskExecution
 */

/*!
 * Constructs a StartTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartTaskExecutionResponse::StartTaskExecutionResponse(
        const StartTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new StartTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new StartTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTaskExecutionRequest * StartTaskExecutionResponse::request() const
{
    Q_D(const StartTaskExecutionResponse);
    return static_cast<const StartTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync StartTaskExecution \a response.
 */
void StartTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::StartTaskExecutionResponsePrivate
 * \brief The StartTaskExecutionResponsePrivate class provides private implementation for StartTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a StartTaskExecutionResponsePrivate object with public implementation \a q.
 */
StartTaskExecutionResponsePrivate::StartTaskExecutionResponsePrivate(
    StartTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync StartTaskExecution response element from \a xml.
 */
void StartTaskExecutionResponsePrivate::parseStartTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
