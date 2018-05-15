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

#include "describefleethistoryresponse.h"
#include "describefleethistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFleetHistoryResponse
 * \brief The DescribeFleetHistoryResponse class provides an interace for EC2 DescribeFleetHistory responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFleetHistory
 */

/*!
 * Constructs a DescribeFleetHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetHistoryResponse::DescribeFleetHistoryResponse(
        const DescribeFleetHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFleetHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetHistoryRequest * DescribeFleetHistoryResponse::request() const
{
    Q_D(const DescribeFleetHistoryResponse);
    return static_cast<const DescribeFleetHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFleetHistory \a response.
 */
void DescribeFleetHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFleetHistoryResponsePrivate
 * \brief The DescribeFleetHistoryResponsePrivate class provides private implementation for DescribeFleetHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFleetHistoryResponsePrivate object with public implementation \a q.
 */
DescribeFleetHistoryResponsePrivate::DescribeFleetHistoryResponsePrivate(
    DescribeFleetHistoryResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFleetHistory response element from \a xml.
 */
void DescribeFleetHistoryResponsePrivate::parseDescribeFleetHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetHistoryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
