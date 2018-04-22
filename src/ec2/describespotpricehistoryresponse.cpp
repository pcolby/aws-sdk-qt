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

#include "describespotpricehistoryresponse.h"
#include "describespotpricehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeSpotPriceHistoryResponse
 * \brief The DescribeSpotPriceHistoryResponse class provides an interace for EC2 DescribeSpotPriceHistory responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeSpotPriceHistory
 */

/*!
 * Constructs a DescribeSpotPriceHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSpotPriceHistoryResponse::DescribeSpotPriceHistoryResponse(
        const DescribeSpotPriceHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeSpotPriceHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotPriceHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSpotPriceHistoryRequest * DescribeSpotPriceHistoryResponse::request() const
{
    Q_D(const DescribeSpotPriceHistoryResponse);
    return static_cast<const DescribeSpotPriceHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeSpotPriceHistory \a response.
 */
void DescribeSpotPriceHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSpotPriceHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeSpotPriceHistoryResponsePrivate
 * \brief The DescribeSpotPriceHistoryResponsePrivate class provides private implementation for DescribeSpotPriceHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeSpotPriceHistoryResponsePrivate object with public implementation \a q.
 */
DescribeSpotPriceHistoryResponsePrivate::DescribeSpotPriceHistoryResponsePrivate(
    DescribeSpotPriceHistoryResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeSpotPriceHistory response element from \a xml.
 */
void DescribeSpotPriceHistoryResponsePrivate::parseDescribeSpotPriceHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotPriceHistoryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
