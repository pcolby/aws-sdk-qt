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

#include "describetaskexecutionresponse.h"
#include "describetaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeTaskExecutionResponse
 * \brief The DescribeTaskExecutionResponse class provides an interace for DataSync DescribeTaskExecution responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::describeTaskExecution
 */

/*!
 * Constructs a DescribeTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTaskExecutionResponse::DescribeTaskExecutionResponse(
        const DescribeTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTaskExecutionRequest * DescribeTaskExecutionResponse::request() const
{
    Q_D(const DescribeTaskExecutionResponse);
    return static_cast<const DescribeTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeTaskExecution \a response.
 */
void DescribeTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeTaskExecutionResponsePrivate
 * \brief The DescribeTaskExecutionResponsePrivate class provides private implementation for DescribeTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeTaskExecutionResponsePrivate object with public implementation \a q.
 */
DescribeTaskExecutionResponsePrivate::DescribeTaskExecutionResponsePrivate(
    DescribeTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeTaskExecution response element from \a xml.
 */
void DescribeTaskExecutionResponsePrivate::parseDescribeTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
