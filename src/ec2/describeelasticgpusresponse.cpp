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

#include "describeelasticgpusresponse.h"
#include "describeelasticgpusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeElasticGpusResponse
 * \brief The DescribeElasticGpusResponse class provides an interace for EC2 DescribeElasticGpus responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeElasticGpus
 */

/*!
 * Constructs a DescribeElasticGpusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticGpusResponse::DescribeElasticGpusResponse(
        const DescribeElasticGpusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeElasticGpusResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticGpusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeElasticGpusRequest * DescribeElasticGpusResponse::request() const
{
    Q_D(const DescribeElasticGpusResponse);
    return static_cast<const DescribeElasticGpusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeElasticGpus \a response.
 */
void DescribeElasticGpusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticGpusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeElasticGpusResponsePrivate
 * \brief The DescribeElasticGpusResponsePrivate class provides private implementation for DescribeElasticGpusResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeElasticGpusResponsePrivate object with public implementation \a q.
 */
DescribeElasticGpusResponsePrivate::DescribeElasticGpusResponsePrivate(
    DescribeElasticGpusResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeElasticGpus response element from \a xml.
 */
void DescribeElasticGpusResponsePrivate::parseDescribeElasticGpusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticGpusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
