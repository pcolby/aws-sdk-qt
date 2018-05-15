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

#include "describeimportimagetasksresponse.h"
#include "describeimportimagetasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeImportImageTasksResponse
 * \brief The DescribeImportImageTasksResponse class provides an interace for EC2 DescribeImportImageTasks responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeImportImageTasks
 */

/*!
 * Constructs a DescribeImportImageTasksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImportImageTasksResponse::DescribeImportImageTasksResponse(
        const DescribeImportImageTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeImportImageTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeImportImageTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImportImageTasksRequest * DescribeImportImageTasksResponse::request() const
{
    Q_D(const DescribeImportImageTasksResponse);
    return static_cast<const DescribeImportImageTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeImportImageTasks \a response.
 */
void DescribeImportImageTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImportImageTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeImportImageTasksResponsePrivate
 * \brief The DescribeImportImageTasksResponsePrivate class provides private implementation for DescribeImportImageTasksResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeImportImageTasksResponsePrivate object with public implementation \a q.
 */
DescribeImportImageTasksResponsePrivate::DescribeImportImageTasksResponsePrivate(
    DescribeImportImageTasksResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeImportImageTasks response element from \a xml.
 */
void DescribeImportImageTasksResponsePrivate::parseDescribeImportImageTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImportImageTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
