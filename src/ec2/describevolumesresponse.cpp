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

#include "describevolumesresponse.h"
#include "describevolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVolumesResponse
 * \brief The DescribeVolumesResponse class provides an interace for EC2 DescribeVolumes responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVolumes
 */

/*!
 * Constructs a DescribeVolumesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVolumesResponse::DescribeVolumesResponse(
        const DescribeVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVolumesRequest * DescribeVolumesResponse::request() const
{
    Q_D(const DescribeVolumesResponse);
    return static_cast<const DescribeVolumesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVolumes \a response.
 */
void DescribeVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVolumesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVolumesResponsePrivate
 * \brief The DescribeVolumesResponsePrivate class provides private implementation for DescribeVolumesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVolumesResponsePrivate object with public implementation \a q.
 */
DescribeVolumesResponsePrivate::DescribeVolumesResponsePrivate(
    DescribeVolumesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVolumes response element from \a xml.
 */
void DescribeVolumesResponsePrivate::parseDescribeVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
