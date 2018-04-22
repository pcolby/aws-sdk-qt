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

#include "describeflowlogsresponse.h"
#include "describeflowlogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFlowLogsResponse
 * \brief The DescribeFlowLogsResponse class provides an interace for EC2 DescribeFlowLogs responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFlowLogs
 */

/*!
 * Constructs a DescribeFlowLogsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFlowLogsResponse::DescribeFlowLogsResponse(
        const DescribeFlowLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFlowLogsResponsePrivate(this), parent)
{
    setRequest(new DescribeFlowLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFlowLogsRequest * DescribeFlowLogsResponse::request() const
{
    Q_D(const DescribeFlowLogsResponse);
    return static_cast<const DescribeFlowLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFlowLogs \a response.
 */
void DescribeFlowLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFlowLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFlowLogsResponsePrivate
 * \brief The DescribeFlowLogsResponsePrivate class provides private implementation for DescribeFlowLogsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFlowLogsResponsePrivate object with public implementation \a q.
 */
DescribeFlowLogsResponsePrivate::DescribeFlowLogsResponsePrivate(
    DescribeFlowLogsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFlowLogs response element from \a xml.
 */
void DescribeFlowLogsResponsePrivate::parseDescribeFlowLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFlowLogsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
