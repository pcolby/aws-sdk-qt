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

#include "describetaskresponse.h"
#include "describetaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeTaskResponse
 * \brief The DescribeTaskResponse class provides an interace for DataSync DescribeTask responses.
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
 * \sa DataSyncClient::describeTask
 */

/*!
 * Constructs a DescribeTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTaskResponse::DescribeTaskResponse(
        const DescribeTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTaskRequest * DescribeTaskResponse::request() const
{
    Q_D(const DescribeTaskResponse);
    return static_cast<const DescribeTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeTask \a response.
 */
void DescribeTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeTaskResponsePrivate
 * \brief The DescribeTaskResponsePrivate class provides private implementation for DescribeTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeTaskResponsePrivate object with public implementation \a q.
 */
DescribeTaskResponsePrivate::DescribeTaskResponsePrivate(
    DescribeTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeTask response element from \a xml.
 */
void DescribeTaskResponsePrivate::parseDescribeTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
