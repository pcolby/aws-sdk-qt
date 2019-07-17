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

#include "describelocationnfsresponse.h"
#include "describelocationnfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationNfsResponse
 * \brief The DescribeLocationNfsResponse class provides an interace for DataSync DescribeLocationNfs responses.
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
 * \sa DataSyncClient::describeLocationNfs
 */

/*!
 * Constructs a DescribeLocationNfsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationNfsResponse::DescribeLocationNfsResponse(
        const DescribeLocationNfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationNfsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationNfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationNfsRequest * DescribeLocationNfsResponse::request() const
{
    Q_D(const DescribeLocationNfsResponse);
    return static_cast<const DescribeLocationNfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationNfs \a response.
 */
void DescribeLocationNfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationNfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationNfsResponsePrivate
 * \brief The DescribeLocationNfsResponsePrivate class provides private implementation for DescribeLocationNfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationNfsResponsePrivate object with public implementation \a q.
 */
DescribeLocationNfsResponsePrivate::DescribeLocationNfsResponsePrivate(
    DescribeLocationNfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationNfs response element from \a xml.
 */
void DescribeLocationNfsResponsePrivate::parseDescribeLocationNfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationNfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
